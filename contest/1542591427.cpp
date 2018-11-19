#include <bits/stdc++.h>
using namespace std;

int main() {
	char password[10];
	scanf("%s", password);
	int n;
	scanf("%d", &n);
	int s[33], e[33];
	memset(s, 0, sizeof s);
	memset(e, 0, sizeof e);
	for (int i = 1; i <= n; i++) {
		char tp[10];
		scanf("%s", tp);
		if (tp[0] == password[0] and tp[1] == password[1]) {
			puts("YES");
			return 0;
		}
		s[tp[0]-'a'] ++;
		e[tp[1]-'a'] ++;
	}
	if (s[password[1]-'a'] and e[password[0]-'a']) puts("YES");
	else puts("NO");
	return 0;
}
