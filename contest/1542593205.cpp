#include <bits/stdc++.h>

int n;
std::string s, ss[105];

int main() {
	std::cin >> s >> n;
	for (int i = 1; i <= n; ++i)
		std::cin >> ss[i];
	
	for (int i = 1; i <= n; ++i) {
		if (ss[i] == s) {
			puts("YES"); return 0;
		}
		for (int j = 1; j <= n; ++j)
			if (ss[i][1] == s[0] && ss[j][0] == s[1]) {
				puts("YES"); return 0;
			}
	}
	
	puts("NO");
	
	return 0;
}