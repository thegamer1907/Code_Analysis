#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n;
char s[3],s1[101][3];
int main() {
	scanf("%s %lld", s, &n);
	for (int i = 0; i < n; ++i) {
		scanf("%s", s1 + i);
	}
	for (int i = 0; i < n; ++i) {
		for (int j = i; j < n; ++j) {
			if ((s[0] == s1[i][0] && s[1] == s1[i][1])
				|| (s[0] == s1[i][1] && s[1] == s1[j][0])
				|| (s[0] == s1[j][0] && s[1] == s1[j][1])
				|| (s[0] == s1[j][1] && s[1] == s1[i][0]))
				return puts("YES"), 0;
		}
	}
	puts("NO");
	return 0;
}