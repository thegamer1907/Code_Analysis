#include "bits/stdc++.h"
using namespace std;
const int N=5e5+20;
int n,a[N],i,cnt[N];
long long dp[N],ans;
int main()
{
	scanf("%d",&n);
	for(i=1;i<=n;i++) scanf("%d",&a[i]),dp[i]=dp[i-1]+a[i];

	if(n<3 or dp[n]%3!=0) return 0 * printf("0");
	for(i=1;i<=n-2;i++) cnt[i]=cnt[i-1]+(dp[i]==dp[n]/3);
	for(i=2;i<=n-1;i++) if(dp[i]==2*dp[n]/3) ans+=cnt[i-1];
	cout<<ans;
}