#include<bits/stdc++.h>
#define fo(i,a,b) for(int i=a;i<=b;i++)
char s[3],t[110][3];
int n;
int main(){
	scanf("%s%d",s,&n);
	fo(i,1,n) scanf("%s",t[i]);
	fo(i,1,n) if (t[i][0]==s[0]&&t[i][1]==s[1]){
		printf("YES\n");
		return 0;
	}
	fo(i,1,n)
		fo(j,1,n)
			if (t[i][1]==s[0]&&t[j][0]==s[1]){
				printf("YES\n");
				return 0;
			}
	printf("NO\n");
	return 0;
}