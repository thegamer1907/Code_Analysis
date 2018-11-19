#include<iostream>
#include<string>
using namespace std;










int main() {
	string p;
	cin >> p;
	int n;
	cin >> n;
	bool primer = false;
	bool segon = false;
	bool trobat = false;
	for (int i = 0; not trobat and i < n; i++) {
		string w;
		cin >> w;
		if (p == w) trobat = true;
		if (p[0] == w[1]) primer = true;
		if (p[1] == w[0]) segon = true;
		if (primer and segon) trobat = true;
	}
	if (trobat) cout << "YES" << endl;
	else cout << "NO" << endl;
}
