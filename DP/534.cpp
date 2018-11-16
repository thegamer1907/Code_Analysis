#include <bits/stdc++.h>

using namespace std;

#define NN 100010
char str[NN];
int dp[NN];

int main() {
#ifndef ONLINE_JUDGE
	freopen("in.in", "r", stdin);
	freopen("out.out", "w", stdout);
#endif

	int m;
	gets(str);
	int n=strlen(str);
	cin>>m;
	dp[0]=0;
	for(int i=1; i<=n; i++){
		dp[i]=dp[i-1];
		if(str[i]==str[i-1])	dp[i]++;
	}
	
	for(int i=1; i<=m; i++)	{
		int L, R;
		cin>>L>>R; 
		printf("%d\n", dp[R-1]-dp[L-1]);
	}
	
	return 0;
}

                         