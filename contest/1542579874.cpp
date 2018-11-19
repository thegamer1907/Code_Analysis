#include <cstdio>
#include <cstdlib>
#include <cstring>
char p[3],t[120][3];
int n;
int main() {
	bool flag=false;
	bool first=false,second=false;
	scanf("%s",p+1);
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
		scanf("%s",t[i]+1);
	for(int i=1; i<=n; i++)
		if(strcmp(t[i]+1,p+1)==0) {
			flag=true;
			break;
		}
	if(flag) {
		printf("YES\n");
		return 0;
	} else {
		for(int i=1; i<=n; i++) {
			if(t[i][1]==p[2])
				first=true;
			if(t[i][2]==p[1])
				second=true;
			if(first==true&&second==true) {
				printf("YES\n");
				return 0;
			}
		}
		printf("NO\n");
	}
	return 0;
}

