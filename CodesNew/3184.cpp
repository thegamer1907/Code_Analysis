#include <bits/stdc++.h>
using namespace std;

const int N=3e5+7;
int n,k,c[N],ans,new_l,new_r;
vector<int> dp(N,0);

int main()
{
	//freopen("i.inp","r",stdin);
	scanf("%d %d ",&n,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d ",&c[i]);
		dp[i]=dp[i-1]+(c[i]==0);
	}
	dp[n+1]=N;
	new_l=N+1;new_r=0;
	for(int l=1;l<=n;l++)
	{
		int r=upper_bound(dp.begin(),dp.begin()+n+2,dp[l-1]+k)-dp.begin();
		if(ans<r-l)
		{
			ans=r-l;
			new_l=l;
			new_r=r-1;
		}
	}
	cout<<ans<<endl;
		for(int i=1;i<=n;i++)
		{
			if(i>=new_l && i<=new_r) cout<<1; else cout<<c[i];
			cout<<" ";
		}
}