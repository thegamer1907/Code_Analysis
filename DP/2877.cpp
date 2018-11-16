///Chefer

#include<bits/stdc++.h>
#define int long long int 
#define f first
#define s second

using namespace std;

typedef pair<int,int> pii;
const int maxn=2e3+3,mod=1e9+7;
int dp[maxn][maxn];
int n,k;
int solve(int x,int y)
{
	if(x>k)
		return 1;
	if(dp[x][y])
		return dp[x][y];
	int t=1;
	while(y*t<=n)
	{
		dp[x][y]=(dp[x][y]+solve(x+1,t*y))%mod;
		t++;
	}
	return dp[x][y];
}
main()
{
	ios_base::sync_with_stdio(false);
	cin>>n>>k;
	cout<<solve(1,1);
	return 0;
}
