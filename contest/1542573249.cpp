#include<bits/stdc++.h>
using namespace std;
#define MAXN 100+10
int n,fi[27],se[27];
char t[3],s[MAXN][3];
int main(){
	scanf("%s",t);
	scanf("%d",&n);
	bool flag=false;
	for(int i=1;i<=n;i++){
		scanf("%s",s[i]);
		if(s[i][0]==t[0]&&s[i][1]==t[1])flag=true;
		fi[s[i][0]-'a']=1;
		se[s[i][1]-'a']=1;
	}
	if(se[t[0]-'a']&&fi[t[1]-'a'])flag=1;
	if(flag)printf("YES");
	else printf("NO");
	return 0;
}