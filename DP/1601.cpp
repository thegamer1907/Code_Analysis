#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int l=-1, r=-1;
	cin >> s;
	for (int i = 0; i < s.length()-1; i++) {
		if (s[i] == 'A' && s[i + 1] == 'B') {
			l = i;
			r = i + 1;
			break;
		}
	}
	if (l != -1) {

		bool ch = false;

		for (int i = 0; i < s.length() - 1; i++) {
			if (s[i] == 'B' && s[i + 1] == 'A') {
				if (i + 1 < l || i > r) {
					cout << "YES" << endl;
					ch = true;
					break;
				}

			}
		}


		if (!ch) {
			l = -1; r = -1;
			for (int i = 0; i < s.length() - 1; i++) {
				if (s[i] == 'B' && s[i + 1] == 'A') {
					l = i;
					r = i + 1;
					break;
				}
			}
			if (l != -1) {
				bool ch = false;

				for (int i = 0; i < s.length() - 1; i++) {
					if (s[i] == 'A' && s[i + 1] == 'B') {
						if (i + 1 < l || i > r) {
							cout << "YES" << endl;
							ch = true;
							break;
						}

					}
				}
				if (!ch) cout << "NO";
			}
			else cout << "NO";
		}

	}
	else cout << "NO" << endl;

}
