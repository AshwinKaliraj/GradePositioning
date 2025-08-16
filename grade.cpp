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
void grade(int score) {
    if (score >= 80) {
        cout << "Grade A" << endl;
    } 
    else if (score >= 60) {
        cout << "Grade B" << endl;
    } 
    else if (score >= 50) {
        cout << "Grade C" << endl;
    } 
    else {
        cout << "Fail :( " << endl;
    }
}
void terminal() {
    cout << "Scores validated." << endl;
    
}

int main() {
    int score = initialization();

    if (process(score)) {
        grade(score);
        terminal();
    }

    return 0;
}