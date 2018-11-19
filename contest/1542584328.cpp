#include<bits/stdc++.h>
using namespace std;
char s[10],t[200][17];
int n,len=0;
main() {
	scanf("%s",s);cin>>n;
	for(int i=1;i<=n;i++) scanf("%s",t[i]);
	len=strlen(t[0]);
	for(int i=1;i<=n;i++) {
		if(t[i][0]==s[0]&&t[i][1]==s[1]) {
					printf("YES");
					return 0;
				}
		
	}
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=n;j++) {

			if(t[i][1]==s[0]&&t[j][0]==s[1]) {
					printf("YES");
					return 0;
				}
		}
	}
	printf("NO");
}