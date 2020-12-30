#include <iostream>

using namespace std;

// https://www.acmicpc.net/problem/2739

int main () {
    int n;

    cin >> n;

    for (int i = 1; i < 10; i++ ) {
        int mul = n * i;  // 출력 전에 곱셈의 값에 대한 변수 mul을 선언해주었음
        cout << n << " * " << i << " = " << mul << endl;
    }
    return 0;
}