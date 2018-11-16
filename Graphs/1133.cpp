
/*code by hazra*/

#include <bits/stdc++.h>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define ll long long
#define ld long double
#define ull unsigned long long
#define all(a) a.begin(),a.end()
#define pul pair<ull,ull>
#define pl pair<ll,ll>

#define present(c,x) ((c).find(x) != (c).end())

using namespace std;



#define fastIO ios::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
const ld EPS=1e-15;
int toInt(string s)  { int sm; stringstream ss(s); ss>>sm; return sm; }
int dcmp(double x, double y) {  return fabs(x-y) <= EPS ? 0 : x < y ? -1 : 1; }


const ll M=3e4+10;
vector<ll>v[M];
ll vis[M];


void dfs(ll s)
{
    vis[s]=1;

    for(auto u:v[s])
        if(!vis[u])
        dfs(u);
}



void solve()
{
	ll n,d;
	cin>>n>>d;

	ll a[n];

	for(ll i=1;i<n;i++)
    {
        cin>>a[i];

        v[i].push_back(i+a[i]);
    }
    dfs(1);
    if(vis[d])
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

int main()
{
	solve();
    return 0;
}
