#include <iostream>

using namespace std;

int main () {
	int a, b;
	cin >> a >> b;
	cout << a*(b%10) << '\n';
	cout << a*(b%100 - b%10)/10 << '\n'; // 100에 대한 나머지를 구한 후 10에 대한 나머지를 뺀것 따라서 10으로 나눠줌 
	cout << a*(b/100) << '\n';
	cout << a* b << endl;
	return 0;
}
