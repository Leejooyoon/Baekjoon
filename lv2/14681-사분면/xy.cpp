#include <iostream>

using namespace std;

// https://www.acmicpc.net/problem/14681

int main () {
    int x, y, answer;
    cin >> x >> y;

    if (x > 0) {

        if (y > 0) {
            answer = 1; // x, y 모두 양수이면 제 1사분면
        }

        else {
            answer = 4; // x는 양수이고 y는 음수이면 제 4사분면
        }
    }

    else {

        if (y > 0) {
            answer = 2; // x는 음수이고 y가 양수이면 제 2사분면
        }

        else {
            answer = 3; // x, y 모두 음수이면 제 3사분면
        }
    }

    cout << answer;
    
}