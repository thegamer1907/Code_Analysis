#include <iostream>
#include <vector>
using namespace std;

int main() {
	string password;
	int n;
	cin >> password >> n;
	vector<string> s(n);
	for (int i = 0; i < n; ++i) cin >> s[i];

	bool ok = false;
	for (int i = 0; i < n; ++i) {
		if (s[i] == password) {
			ok = true;
			break;
		}
		if (s[i][1] == password[0]) {
			for (int j = 0; j < n; ++j) {
				if (s[j][0] == password[1]) {
					ok = true;
					break;
				}
			}
		}

		if (ok) break;
	}
	cout << (ok ? "YES" : "NO") << endl;
}
