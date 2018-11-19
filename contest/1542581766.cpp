#include<bits/stdc++.h>
char s[107][5];
int n;
int main(){
	scanf("%s",s[0]);
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		scanf("%s",s[i]);
	}
	for(int i=1;i<=n;++i){
		if(s[0][0]==s[i][0]&&s[0][1]==s[i][1])return puts("YES"),0;
		for(int j=1;j<=n;++j)if(s[0][0]==s[i][1]&&s[0][1]==s[j][0])return puts("YES"),0;
	}
	return puts("NO"),0;
}
