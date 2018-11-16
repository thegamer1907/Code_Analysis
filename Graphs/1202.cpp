#include<bits/stdc++.h>
using namespace std;
#define crap ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
typedef long long int ll;
typedef unsigned long long ull;
typedef std::vector<int> vi;
typedef std::vector<ll> vll;
typedef std::vector<vi > vvi;
typedef std::vector<vll > vvll;
typedef std::pair<int,int> ii;
typedef std::pair< ll, ll > lp;
typedef std::vector<ii> vii;
typedef std::vector<vii > vvii;
 
#define pb push_back 
#define PB pop_back
#define pf push_front
#define PF pop_front
#define mp make_pair
#define mem(a,b) memset(a,b,sizeof(a))
#define in(a,n) F(i,0,n-1)cin>>a[i]
#define in1(a,n) F(i,1,n)cin>>a[i]
#define ff first
#define ss second
#define F(i,a,b) for (ll i=a;i<=b;i++)
#define RF(i,a,b) for(ll i=a;i>=b;i--)
#define rep(i,n) F(i,0,n-1)
#define clr clear
#define rz resize
#define sqr(a) ((a) * (a))
#define sz(a) int((a).size())
#define all(a) (a).begin(), (a).end()
#define len(s) (s).length()

vi g[30005];
int f,t;

void dfs(int v,int p)
{
	//cout<<v<<"$\n";
	if (v==t)
		f=1;

	for (int u : g[v])
	{
		if (u==p)
			continue;
		dfs(u,v);
	}	
}

int main(int argc, char const *argv[])
{
	crap;
	int n;
	cin>>n>>t;

	int a[n-1];
	rep(i,n-1)
	{
		cin>>a[i];
		g[i+1].pb(a[i]+i+1);
	}

	dfs(1,0);

	if (f)
		cout<<"YES";
	else
		cout<<"NO";


	return 0;
}