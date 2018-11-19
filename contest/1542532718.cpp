#include<bits/stdc++.h>
#define ind(a) scanf("%d", &a)
#define inlld(a) scanf("%lld", &a)
#define pb push_back
#define f first
#define s second
#define ind2(a, b) scanf("%d%d", &a, &b)
#define ind3(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define inlld2(a, b) scanf("%lld%lld", &a, &b)
#define inlld3(a, b, c) scanf("%lld%lld%lld", &a, &b, &c)
#define int long long
using namespace std;

const int N=1e5+5;
const int MOD=1e9+7;
typedef long long ll;
typedef long double ld;	

int power(int a,int b,int m = MOD){
	if(b == 0) return 1;
	if(b == 1) return a;
	int x = power(a,b/2,m)%m;
	x = (x*x)%m;
	if(b%2) return (x*a)%m;
	return x;
}
int n, k, arr[N];
int tmp[N], dp[25][N];
int cur_l=1, cur_r=1, cur_val=0;
int cost(int l, int r)
{
	while(cur_l>l)
	{
		cur_l--;
		cur_val+=tmp[arr[cur_l]];
		tmp[arr[cur_l]]++;
	}
	while(cur_r<r)
	{
		cur_r++;
		cur_val+=tmp[arr[cur_r]];
		tmp[arr[cur_r]]++;
	}
	while(cur_r>r)
	{
		tmp[arr[cur_r]]--;
		cur_val-=tmp[arr[cur_r]];
		cur_r--;
	}
	while(cur_l<l)
	{
		tmp[arr[cur_l]]--;
		cur_val-=tmp[arr[cur_l]];
		cur_l++;
	}
	return cur_val;
}
void solve(int row, int s, int e, int l, int r)
{
	if(s>e)
		return;
	int mid=(s+e)/2;
	int opt=-1;
	dp[row][mid]=1e18;
	for(int a=l; a<=min(mid, r); a++)
	{
		int newcost=dp[row-1][a-1]+cost(a, mid);
		if(newcost<dp[row][mid])
		{
			dp[row][mid]=newcost;
			opt=a;
		}
	}
	solve(row, s, mid-1, l, opt);
	solve(row, mid+1, e, opt, r);
}
#undef int
int main()
{
	#define int long long
	inlld2(n, k);
	for(int a=1; a<=n; a++)
		inlld(arr[a]);
	int cur=0;
	for(int a=1; a<=n; a++)
	{
		cur+=tmp[arr[a]];
		tmp[arr[a]]++;
		dp[1][a]=cur;
	}
	memset(tmp, 0, sizeof(tmp));
	tmp[arr[1]]++;
	for(int a=2; a<=k; a++)
		solve(a, 1, n, 1, n);
	printf("%lld\n", dp[k][n]);
	return 0;
}