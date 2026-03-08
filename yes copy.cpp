#include <iostream>
#include <string>
using namespace std;

class Trivia {
private:
    string name;
    string country;
    int age;
    string game_name;
    float score[3];
    string status;
public:
    void setParticipant() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Country: ";
        cin >> country;
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Game Name: ";
        cin >> game_name;
    }

    void score_Gained() {
        for (int i = 0; i < 3; i++) {
            cout << "Enter Score " << i + 1 << " : ";
            cin >> score[i];
        }
    }

    void average_Val() {
        float total = 0;
        for (int i = 0; i < 3; i++) {
            total += score[i];
        }
        float avg = total / 3;
        set_status(avg);
    }

    void display_result() {
        cout << "------------------------------" << endl;
        cout << "RESULT SCORED" << endl;
        cout << "------------------------------" << endl;
        cout << "Name      : " << name << endl;
        cout << "Country   : " << country << endl;
        cout << "Age       : " << age << endl;
        cout << "Game name : " << game_name << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Score " << i + 1 << " : " << score[i] << endl;
        }
        cout << "Status    : " << status << endl;
    }

private:
    void set_status(float avg) {
        if (avg >= 80)
            status = "Winner";
        else if (avg >= 50)
            status = "Qualified";
        else
            status = "Not Qualified";
    }
};

int main() {
    int n;
    cout << "How many warriors? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        Trivia tv;
        Trivia* tv1 = &tv;

        tv1->setParticipant();
        tv1->score_Gained();
        tv1->average_Val();
        tv1->display_result();
    }
    return 0;
}