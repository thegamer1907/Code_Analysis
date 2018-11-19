#include <bits/stdc++.h>
using namespace std;

char pwd[3];
int n;
char s1[3];

int main() {
	scanf("%s", pwd);
	scanf("%d", &n);
	bool flag, flag1, flag2 = flag1 = flag = 0;
	for(int i = 1; i <= n; ++i) {
		scanf("%s", s1);
		if((string)s1 == (string)pwd)
			flag = 1;
		if(s1[1] == pwd[0])
			flag1 = 1;
		if(s1[0] == pwd[1])
			flag2 = 1;
	}
	printf("%s\n", (flag || (flag1 && flag2)) ? "YES" : "NO");
	
	return 0;
}