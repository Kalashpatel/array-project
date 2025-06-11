#include <iostream>
using namespace std;

class MarksManager {
private:
    int marks[5];

public:

    void inputMarks() {
        cout << "Enter marks for 5 subjects (out of 100):\n";
        for (int i = 0; i < 5; ++i) {
            cout << "Subject " << (i + 1) << ": ";
            cin >> marks[i];

            // Optional: validate input
            while (marks[i] < 0 || marks[i] > 100) {
                cout << "Invalid mark. Enter a value between 0 and 100: ";
                cin >> marks[i];
            }
        }
    }

    float calculateAverage() {
        int total = 0;
        for (int i = 0; i < 5; ++i) {
            total += marks[i];
        }
        return static_cast<float>(total) / 5;
    }

    void displayResult() {
        float average = calculateAverage();
        cout << "\nAverage Marks: " << average << endl;

        if (average >= 40)
            cout << "Result: Pass" << endl;
        else
            cout << "Result: Fail" << endl;
    }
};

int main() {
    MarksManager student;
    student.inputMarks();
    student.displayResult();

    return 0;
}