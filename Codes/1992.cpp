#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
ll n,k,a1,a2,a[300000],ans=0;
map <ll,ll> dp[3];
int main()
{
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);	
	cin >> n >> k;
	a1=k;
	a2=k*k;
	for(int i=1; i<=n; i++)
	{
		cin >> a[i];
		if(a[i]%a2==0)
		{
			ans+=dp[1][a[i]/k];
		}
		if(a[i]%a1==0)
			dp[1][a[i]]+=dp[0][a[i]/k];
		dp[0][a[i]]++;
	}
	cout << ans;
	return 0;
}
