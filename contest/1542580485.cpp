#include<bits/stdc++.h>
using namespace std;
int n;
char s[4];
char t[102][4];
int f[26], b[26];
int main()
{
	scanf("%s", s);
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", t[i]);
	}
	for (int i = 0; i < n; i++) {
		if (t[i][0] == s[0] && t[i][1] == s[1]) {
			printf("YES\n");
			return 0;
		}
		for (int j = 0; j < n; j++) {
			if (t[i][0] == s[1] && t[j][1] == s[0] || t[j][0] == s[1] && t[i][1] == s[0]) {
				printf("YES\n");
				return 0;
			}
		}
	}
	printf("NO\n");
}