#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int count = 1;
	cin >> s;
	char c = s[0];
	for (int i = 1; i < s.length(); i++) {
		if (s[i] == c) count++;
		else {
			c = s[i];
			count = 1;
		}
		if (count == 7) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
	return 0;
}
