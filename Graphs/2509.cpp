#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define fr(x,v) for(auto&x :v)
#define pr(a,b) cout << a << " " << b << endl
#define pr1(a,b,c) cout << a << " " << b << " "<< c << endl

typedef long long int ll;
typedef vector<ll> vi;

struct input{
	ll a;
};

const ll M=1e9+7;
const ll N=1e4+7;
template< class T > T gcd(const T a, const T b) { return (b ? gcd<T>(b, a%b) : a); }
ll cnt=0;
// ll par[N];
bool vis[N];
vector <ll> v[N];
ll col[N];

void dfs(ll x)
{
	vis[x]=true;
	for(auto& i : v[x])
	{
		if(vis[i]==false)
		{
		dfs(i);
		if(col[i]!=col[x])
			cnt++;
		}
	}
}

						

int main()
{
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("in.txt", "r", stdin);
    // for writing output to output.txt
    freopen("out.txt", "w", stdout);
	#endif
	fastio;
	
	ll n,m,i,j,k,temp,x,y,z,t,p;
	string S;
	cin >> n;

	

	for(i=2;i<=n;i++)
	{
		cin >> x;
		v[i].pb(x), v[x].pb(i);
	}

	
	for(i=1;i<=n;i++)
	{
		vis[i]=false;
		cin >> col[i];
	}
	cnt++;
	// par[1]=-1;
	dfs(1);
	cout << cnt << endl;


	return 0;
}