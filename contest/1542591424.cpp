#include <bits/stdc++.h>

using namespace std;

int main() {
	string s; cin >> s;
	int n; cin >> n;
	string text = "";
	for (int i = 0; i < n; i++) {
		string t; cin >> t; text += t;
		if ((t[1] == s[0] && t[0] == s[1]) || t == s) {
			puts("YES");
			return 0;						
		}		
	}
	for (int i = 1; i < 2 * n; i += 2) {
		for (int j = 0; j < 2 * n; j += 2) {
			if (s[0] == text[i] && s[1] == text[j]) {
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
}