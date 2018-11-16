#include<bits/stdc++.h>

#define X  first
#define Y  second
typedef long long ll;

#define FOR(i,a,b) for(ll i = a;i<=b;i++)
#define FOD(i,a,b) for(ll i = a;i>=b;i--)
#define pb push_back
#define mp make_pair

using namespace std;

typedef pair<ll,ll>ii;
typedef priority_queue<ll,vector<ll>,greater<ll> > heap_min;
const ll maxN = 1e6+5;
const ll inf = 1e10;
const ll mod = 1e9+7;
ll t,k,a,b;
ll f[maxN];
void solve(ll a,ll b)
{
	cout<<(f[b] - f[a-1] + mod) % mod<<endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
	cin>>t>>k;
	f[0] = 1;
	FOR(i,1,maxN-1)
	{
		f[i] = f[i-1];
		if(i >= k)f[i] += f[i-k];
		f[i] %= mod;
	}
	FOR(i,1,maxN-1)
	{
		f[i]+=f[i-1];
		f[i]%=mod;
	}
	while(t--)
	{
		cin>>a>>b;
		solve(a,b);
	}
	return 0;
}

