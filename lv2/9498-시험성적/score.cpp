#include <iostream>

using namespace std;

// https://www.acmicpc.net/problem/9498

int main() {
    int score;

    cin >> score;

    if (score <= 100 && score >= 90 ) {
        cout << "A";
    }
    
    else if (score < 90 && score >= 80) {
        cout << "B";
    }
    else if (score < 80 && score >= 70) {
        cout << "C";
    }
    else if (score < 70 && score >= 60) {
        cout << "D";
    }
    else {
        cout << "F";
    }
    return 0;
}