#include<iostream>
#include <string>
using namespace std;
int main() {
	string tmp;
	cin >> tmp;
	int n; cin >> n;
	bool a=false, b=false;
	char ac[3];
	for (int i = 0; i < n; i++) {
		cin >> ac;
		if (ac[0] == tmp[0] && ac[1] == tmp[1]) {
			cout << "YES" << endl;
			return 0;
		}
		if (ac[0] == tmp[1]) {
			a = true;
		}
		if (ac[1] == tmp[0]) {
			b = true;
		}
	}
	if (a == true && b == true) {
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
}