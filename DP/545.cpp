#include<bits/stdc++.h>

using namespace std;
long long dp[100100];
char s[100100];
int i,m,l,r,n;
int main(){
#ifndef ONLINE_JUDGE
		freopen("in.in","r",stdin);
		freopen("out.out","w",stdout);
#endif
	gets(s);
	scanf("%d",&m);
	n=strlen(s);
	dp[0]=0;
	for(i=1;i<=n;i++){
		dp[i]=dp[i-1];
		if(s[i]==s[i-1])dp[i]++;
	}
	for(i=1;i<=m;i++){
		scanf("%d%d",&l,&r);
		printf("%d\n",dp[r-1]-dp[l-1]);
	}
return 0;
}
	
	

                                