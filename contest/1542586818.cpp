#include <iostream>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	string pass;
	getline(cin, pass);
	int n;
	cin >> n;
	vector<string> words(n);
	for (int i = 0; i < n; i++) cin >> words[i];
	bool last = false;
	bool first = false;
	for (int i = 0; i < n; i++) {
		if (words[i] == pass) {
			cout << "YES";
			return 0;
		}
		if (!first && words[i][1] == pass[0]) first = true;
		if (!last && words[i][0] == pass[1]) last = true;
	}
	if (first && last) cout << "YES";
	else cout << "NO";
	return 0;
}