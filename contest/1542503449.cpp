#include <bits/stdc++.h>

using namespace std;

int main() {


	string pass, gess;
	bool con1 = false, con2 = false;
	int n, i;
	cin >> pass;
	cin >> n;
	for (i = 0; i < n; ++i) {
		cin.ignore();
		cin >> gess;
		if (gess == pass) {
			cout << "YES" << endl;
			return (0);
		}
		if (pass[0] == gess[1]) con1 = true;
		if (pass[1] == gess[0]) con2 = true;
		if (con1 && con2) {
			cout << "YES" << endl;
			return (0);
		}
	}
	cout << "NO" << endl;
	

	return (0);
}
