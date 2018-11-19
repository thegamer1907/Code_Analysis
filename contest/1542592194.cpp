#include <bits/stdc++.h>
using namespace std;

int n;
char s[3], s1[3];

bool can, chk[2][256];
int main() {
	
	//freopen("in.txt", "r", stdin);
	
	scanf("%s", s);
	scanf("%d", &n);
	while (n--) {
		scanf("%s", s1);
		if (strcmp(s, s1) == 0) can = true;
		chk[0][s1[0]] = chk[1][s1[1]] = true;
	}
	
	if (chk[0][s[1]] && chk[1][s[0]]) can = true;
	printf("%s\n", can ? "YES" : "NO");
	return 0;
}
