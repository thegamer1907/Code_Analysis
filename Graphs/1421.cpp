// In the name of God
#include <bits/stdc++.h>
using namespace std;
#define _ std::ios_base::Init i; std::ios_base::sync_with_stdio(false); std::cin.tie(0);
#define FOR(i, s, e) for(ll i=s; i<=e; i++)
#define rep(i, t) for(ll i=0; i<t; i++)
#define ep return 0
#define cendl cout<<endl
#define pb push_back
#define pp pop_back
#define ff first
#define ss second
#define mp make_pair
#define all(x) x.begin(),x.end()
#define uni(x) x.resize(unique(x.begin(),x.end())-x.begin())
#define mem(x) memset(x , 0 , sizeof(x))
#define sr(x,y) sort((x),(x)+(y))
#define reco(x) return cout<<x<<endl,0

typedef unsigned long long int  ull;
typedef long long ll;
typedef short int si;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector <ll> vl;
typedef vector<int> vi;
typedef vector <string> vs;

const ll Maxn3 = 1e3 + 10;
const ll Maxn4 = 1e4 + 10;
const ll Maxn5 = 1e5 + 10;
const ll Maxn6 = 1e6 + 10;
const ll Maxn7 = 1e7 + 10;
const ll Maxn8 = 1e8 + 10;
const ll Maxn9 = 1e9 + 10;
const ll Maxn18 = 1e18 + 10;
const ll Mod1 = 1e7 + 7;
const ll Mod2 = 1e9 + 7;
const int N=102000;

int main() {
ll n,m;
cin>>n>>m;
ll pos=1;
for (int i=0;i<n-1;i++)
{
ll temp;cin>>temp;
if (pos==i+1)
	{
	pos+=temp;
	if (pos==m)
		{
		cout<<"YES";
		return 0;
		}
	}
}	
cout<<"NO";
return 0;
}