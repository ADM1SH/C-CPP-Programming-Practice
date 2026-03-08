#include <iostream>
#include <vector>
#include <string>
#include <unistd.h> // for usleep
#include <sys/ioctl.h>

// A simple structure to hold our compressed frame data
// For example, "W10B5W5" means 10 white pixels, 5 black, 5 white.
const std::vector<std::string> frames = {
    // Placeholder for actual Bad Apple!! frame data
    // For now, let's create a simple animation: a white bar moving
    "B800", // Frame 1: all black
    "W800", // Frame 2: all white
    "B800",
    "W800",
    "B800",
    "W800",
    "B800",
    "W800",
};

void drawFrame(const std::string& frameData, int width, int height) {
    std::cout << "\x1b[H"; // Move cursor to top-left
    int charIndex = 0;
    char currentChar = ' ';
    int count = 0;

    for (char c : frameData) {
        if (isdigit(c)) {
            count = count * 10 + (c - '0');
        } else {
            if (count > 0) {
                for (int i = 0; i < count; ++i) {
                    // Using Unicode block characters for better visuals
                    std::cout << (currentChar == 'W' ? "\u2588" : " ");
                    charIndex++;
                    if (charIndex % width == 0) {
                        std::cout << std::endl;
                    }
                }
            }
            currentChar = c;
            count = 0;
        }
    }
    // Draw the last run of characters
    for (int i = 0; i < count; ++i) {
        std::cout << (currentChar == 'W' ? "\u2588" : " ");
        charIndex++;
        if (charIndex % width == 0) {
            std::cout << std::endl;
        }
    }
    fflush(stdout);
}

int main() {
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    const int width = w.ws_col;
    const int height = w.ws_row;

    // 30 FPS playback rate
    const int frame_duration_us = 1000000 / 30;

    for (const auto& frame : frames) {
        drawFrame(frame, width, height);
        usleep(frame_duration_us);
    }

    return 0;
}
