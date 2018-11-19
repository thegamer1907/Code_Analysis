#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

string s,str[2000];
int n;

int main () {
	cin >> s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str[i];
	}

	int first = 0;
	int second = 0;
	for (int i = 0; i < n; i++) {
		if (s[0] == str[i][0] && s[1] == str[i][1]) {
			cout << "YES";
			return 0;
		}
	}

	for (int i = 0; i < n; i++) {
		if (s[1] == str[i][0]) {
			first++;
		}
		if (s[0] == str[i][1]) {
			second++;
		}
	}

	if (first > 0 && second > 0) cout << "YES"; else cout << "NO";

}