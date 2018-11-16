#include<cstdio>
#include<algorithm>
#define ll long long
#define MOD 1000000007
using namespace std;
ll dp[100100];
ll sum[100100];
int main() 
{
	ll n, m;
	scanf("%lld %lld", &n, &m);
	dp[0]=1,dp[1] = 1;
	for (int i = 1; i <= 100000; i++)
	{
		if(i!=1)
			dp[i] =dp[i - 1];
		if (i - m >= 0)dp[i] += dp[i - m];
		dp[i] %= MOD;
	}
	for (int i = 1; i <= 100000; i++) {
		sum[i] = sum[i - 1] + dp[i];
		sum[i] %= MOD;
	}
	for (int i = 0; i < n; i++)
	{
		ll q, w;
		scanf("%lld %lld", &q, &w);
		ll t = sum[w] - sum[q-1];
		if (t < 0)t += MOD;
		printf("%lld\n", t);
	}
}