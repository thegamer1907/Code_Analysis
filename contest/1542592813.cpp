#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string pw;
	cin >> pw;
	int n; cin >> n;
	vector<string> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	bool find = false;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			string cur = s[i] + s[j];
			if (cur.find(pw) != string::npos) {
				find = true;
			}
		}
	}
	if (find) cout << "YES";
	else cout << "NO";
	return 0;
}