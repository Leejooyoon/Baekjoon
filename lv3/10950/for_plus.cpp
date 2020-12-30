#include <iostream>

using namespace std;

// acmicpc.net/problem/10950

int main() {
    int n, a, b;
    cin >> n; // for문 진입전에 주어지는 테스트케이스의 개수를 받는 n을 선언해주어야 함

    for (int i = 0; i < n; i++) {

        cin >> a >> b;
        int  c = a + b;
        cout << c << endl;

    }
    
    return 0;
}