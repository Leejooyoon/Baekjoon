#include <iostream>

using namespace std;

// https://www.acmicpc.net/problem/8393

int main() {
    int n;
    int sum = 0;

    cin >> n;

    for( int i = 1; i < n+1; i++) { 
        // 1과 n도 더해야하기 때문에 i를 1로 선언, n+! 미만으로 범위 선언
        sum =  sum + i;
    }

    cout << sum;
}