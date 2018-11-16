/*input
6
1 2 2 1 5
2 1 1 1 1 1



*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vll;
#define pb push_back 
#define f first
#define s second
#define int ll
#define fr(j,n) for(int i=j;i<=n;i++)
#define reset(a) memset(a,0,sizeof(a))
#define minqueue priority_queue<int,vector<int>,greater<int> >
int const mod = 1e9+7;
int const inf = 2e18;


int power(int x, int y, int mod = inf)
{
    int ans = 1;
    x %= mod;
    while(y)
    {
        if(y&1)
            ans = (x * ans) % mod;

        x = (x * x) % mod;
        y >>= 1;
    }
    return ans;
}
int gcd(int a , int b)
{
	if(a==0)
	return b;
	return gcd(b%a,a);
}
int ans=1;
int const N = 1e4+10;
vector<int> v[N];
int vis[N];
int c[N];
void dfs(int i,int col)
{
	vis[i]=1;

	if(col!=c[i])
	{
		ans++;
		col=c[i];
	}
	for(auto x : v[i])
	{
		if(!vis[x])
			dfs(x,col);
	}
}

signed main() {
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int  n;
	cin>>n;


	for(int i=2;i<=n;i++)
		{
		int c;
		cin>>c;
		v[c].pb(i);
		}
	
	c[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>c[i];
	}
	dfs(1,c[1]);
	cout<<ans;
return 0;
}
