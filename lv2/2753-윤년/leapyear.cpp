#include <iostream>

using namespace std;

// https://www.acmicpc.net/problem/2753

int main() {
    int year;

    cin >> year;

    if (year%4 == 0) {
        if (year%100 != 0 || year%400 == 0) { // "||" -> or를 뜻함(추가로 and는 &&)

            cout << 1;

        }
        
        else
        {
            cout << 0;
        }
    }

    else {
        cout << 0;
    }
}