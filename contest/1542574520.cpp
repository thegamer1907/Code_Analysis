#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
using namespace std;
char s[10];
int main() {
	scanf("%s",s);
	bool judge1=0,judge2=0;
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) {
		char ss[10];
		scanf("%s",ss);
		if (ss[0]==s[0]&&ss[1]==s[1]) {
			printf("yEs\n");
			return 0;
		}
		if (ss[1]==s[0]) judge1=1;
		if (ss[0]==s[1]) judge2=1;
	}
	if (judge1&&judge2) printf("yEs\n");
	else printf("nO\n");
	return 0;
}