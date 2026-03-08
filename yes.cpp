#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <vector>

#define CHUNK_SIZE 10485760  // 10 MB per write
#define NUM_THREADS 4

void writeJunk(const std::string& filename) {
    std::ofstream file(filename, std::ios::out | std::ios::app);
    if (!file.is_open()) {
        std::cerr << "Failed to open " << filename << std::endl;
        return;
    }

    char* buffer = new char[CHUNK_SIZE];

    std::srand(static_cast<unsigned int>(std::time(nullptr)) +
               static_cast<unsigned int>(std::hash<std::thread::id>()(std::this_thread::get_id())));

    while (true) {
        for (int i = 0; i < CHUNK_SIZE - 1; ++i) {
            buffer[i] = ' ' + (std::rand() % 95);
        }
        buffer[CHUNK_SIZE - 1] = '\n';

        file.write(buffer, CHUNK_SIZE);
        file.flush();
    }

    delete[] buffer;
}

int main() {
    std::vector<std::thread> threads;

for (int i = 0; i < NUM_THREADS; ++i) {
    std::string filename = "bomb_" + std::to_string(i) + ".txt";
    threads.emplace_back(std::thread([filename]() {
        writeJunk(filename);
    }));
}
    for (std::thread& t : threads) {
        t.join();
    }

    return 0;
}