#include <iostream>
using namespace std;

// Function declarations
int initialization();
bool process(int score);
void grade(int score);
void terminal();

int initialization() {
    int score;
    cout << "Enter your Score: ";
    cin >> score;
    return score;
}

bool process(int score) {
    if (score >= 0 && score <= 100) {
        return true; 
    } else {
        cout << "Invalid score!" << endl;
        return false; 
    }
}