#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;


int main() {
	int n;
	cin >> n;
	vector<string> s(n);
	bool finded = false;
	for (int i = 0;i < n;++i) {
		cin >> s[i];
		if (!finded) {
			if (s[i][0] == 'O' && s[i][1] == 'O') {
				finded = true;
				s[i][0] = s[i][1] = '+';
			}
			else if (s[i][3] == 'O' && s[i][4] == 'O') {
				finded = true;
				s[i][3] = s[i][4] = '+';
			}
		}
	}
	if (finded) {
		cout << "YES" << endl;
		for (int i = 0;i < n;++i) {
			cout << s[i] << endl;
		}
	}
	else cout << "NO";
	return 0;
}