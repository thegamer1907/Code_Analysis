#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ff first
#define ss second
#define mp make_pair
#define pb push_back

#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl

template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, long long m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%m; b/=2; a=(a*a)%m; } return ans%m; }

const int N=1e5+5;
const int M1=21;

int n, k, distinct=0, l = 1, r = 0;
long long current_val=0; 
long long a[N], freq[N];
long long dp[M1][N], P[M1][N];

void get_value(int L, int R)
{
	while(L<l)
	{
		l--;
		current_val+=freq[a[l]];
		freq[a[l]]++;
	}
	while(l<L)
	{
		freq[a[l]]--;
		current_val-=freq[a[l]];
		l++;
	}
	while(R<r)
	{
		freq[a[r]]--;
		current_val-=freq[a[r]];
		r--;
	}
	while(r<R)
	{
		r++;
		current_val+=freq[a[r]];
		freq[a[r]]++;
	}
}

void conquer(int g, int L, int R, int lo, int hi)
{
	if(L>R)
		return;
	int M=(L+R)>>1;
	int bestk=0;
	dp[g][M]=1e15;
	if(g==1){
	    for(int k1=lo;k1<=min(hi, M);k1++)
	{
		get_value(k1, M);
		long long cur_cost=dp[g-1][k1-1]+current_val; //Current val stores cost of [k1, M];
		if(cur_cost<dp[g][M]) 
		{
			dp[g][M]=cur_cost;
			bestk=k1;
		}
	} 
	}
	else{
	    for(int k1=lo;k1<=min(hi, M);k1++)
	{
		get_value(k1+1, M);
		long long cur_cost=dp[g-1][k1]+current_val; //Current val stores cost of [k1, M];
		if(cur_cost<dp[g][M]) 
		{
			dp[g][M]=cur_cost;
			bestk=k1;
		}
	} 
	}
	P[g][M]=bestk;
	if(L!=R)
	{
		conquer(g, L, M-1, lo, bestk);
		conquer(g, M+1, R, bestk, hi);
	}
}

int32_t main()
{
	IOS;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		dp[0][i]=1e15;
	}
	for(int i=1;i<=k;i++)
	{
		conquer(i, 1, n, 1, n);
	}
	cout<<dp[k][n];
	return 0;
}