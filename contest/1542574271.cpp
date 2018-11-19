#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

string s[105];
int main() {
	int n;
	string tar;
	cin >> tar >> n;
	for (int i = 1; i <= n; i++) {
		cin >> s[i];
		if (s[i] == tar) {
			puts("YES");
			return 0;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (s[i][0] == tar[1] && s[j][1] == tar[0]) {
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
}
