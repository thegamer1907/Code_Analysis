#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vll;
typedef long double LD;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
typedef pair<string, ll> psl;
typedef vector<psl> vpsl;
typedef vector<int> vi;

#define fur(i, a, b) for (int(i) = (a); i < (b); ++(i))
#define revf(i, a, b) for (int(i) = (a)-1; (i) >= (b); --(i))
#define mp make_pair
#define mod 1000000007
#define inf 2000000007
#define pb push_back
#define eps 1e-5
#define X first
#define Y second

ll min(ll x,ll y){
	return x<y?x:y;
}
ll max(ll x,ll y){
	return x>y?x:y;
}

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	ll n;
	cin >> n;
	vector<vll> dp(n+1, vll(2));
	vll a(n);
	ll numones=0;
	fur(i, 0, n)
	{
		cin >> a[i];
		if (a[i] == 1){
			a[i] = -1;
			numones++;
		}
		else
		{
			a[i] = 1;
		}
	}
	if(numones==n){
		cout<<n-1;
		return 0;
	}
	dp[0][1]=a[0];
	fur(i,1,n+1){
		dp[i][0]=max(dp[i-1][0]+a[i-1],0);
		dp[i][1]=max(dp[i-1][1],dp[i][0]);
	}
	cout<<dp[n][1]+numones;
	return 0;
}
