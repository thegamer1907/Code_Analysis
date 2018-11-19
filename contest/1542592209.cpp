#include <bits/stdc++.h>
using namespace std;


char s[5], t[100 + 5][5];

int main(void) {
	
	scanf("%s", s);
	int n, i;
	scanf("%d", &n);
	bool flag1 = false, flag2 = false;
	for (i = 0; i < n; i++) {
		scanf("%s", t[i]);
		if (strcmp(s, t[i]) == 0) {
			break;
		}
	}
	if (i != n) {
		puts("YES");
	} else{
		for (i = 0; i < n; i++) {
			if (t[i][1] == s[0]) {
				flag1 = true;
				break;
			}
		}
		for (i = 0; i < n; i++) {
			if (t[i][0] == s[1]) {
				flag2 = true;
				break;
			}
		}
		if (flag1 && flag2) {
			puts("YES");
		} else {
			puts("NO");
		}
	}
	
	
	
	return 0;
}