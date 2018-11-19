#include<bits/stdc++.h>
using namespace std;
char s[100], t[100];
int n, b[2][2000];
int main() {
	scanf("%s", s);
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		scanf("%s", t);
		if(t[0] == s[0] && t[1] == s[1]) {
			printf("YES\n");
			return 0;
		}
		b[0][t[1]] = 1;
		b[1][t[0]] = 1;
	}
	if(b[0][s[0]] && b[1][s[1]]) printf("YES"); else printf("NO");
	return 0;
}