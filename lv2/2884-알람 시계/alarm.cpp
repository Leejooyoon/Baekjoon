#include <iostream>
#include <sstream>

using namespace std;

// https://www.acmicpc.net/problem/2884

int main() {
    int h, m;

    cin >> h >> m;

    m = m - 45;

    if (m >= 0) {
        cout << h << " " << m;
    }

    else {
        h = h - 1;
        m = m + 60; // 60분에서 남은시간을 빼줌(m이 음수이기 때문에 빼기나 다름없음)
        if (h >= 0)
        {
            cout << h << " " << m;
        }
        
        else {
            h = 23; // 어차피 h < 0인 경우는 무조건 h = -1이라서 결국 23
            cout << h << " " << m;
        }
    }
    
}