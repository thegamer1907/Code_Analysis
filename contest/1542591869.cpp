#include<bits/stdc++.h>
using namespace std;
char s[3], t[3];

int main() {
	scanf("%s", s);
	int n; scanf("%d", &n);
	int flg = 0;
	int sig1 = 0, sig2 = 0;
	for (int i = 0; i < n; i ++) {
		scanf("%s", t);
		if (s[0] == t[0] && s[1] == t[1]) flg = 1;
		if (t[0] == s[1]) sig1 = 1;
		if (t[1] == s[0]) sig2 = 1;
	}
	if (flg || (sig1 && sig2)) {
		puts("YES");
	} else puts("NO");
	return 0;
}

