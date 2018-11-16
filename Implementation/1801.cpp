#include <iostream>
#include <string.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int counter = 1;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i-1]) {
			counter++;
		} else {
			counter = 1;
		}
		if (counter == 7) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}
