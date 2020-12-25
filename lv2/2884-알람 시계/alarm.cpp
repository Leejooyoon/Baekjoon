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
        m = m + 60;
        if (h >= 0)
        {
            cout << h << " " << m;
        }
        
        else {
            h = 23;
            cout << h << " " << m;
        }
    }
    
}