#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
typedef vector<string> vs;
typedef vector<ll> vi;
typedef pair<ll, ll> ii;
typedef vector<ii> vii;
typedef vector<pair<string, ll> > vsi;
typedef set<ll> si;
typedef map<ll, ll> mii;
typedef map<string, ll> msi;
typedef tuple<ll, ll, ll> ti;

#define pb push_back
#define mk make_pair
#define all(v) (v).begin(), (v).end()
#define mod 107
#define ff first
#define ss second


//Loops
#define REP(i, b) for(ll i=0; i<(ll)(b); i++)
#define F(i, a, b) for(ll i=(ll)(a); i<=(ll)(b); i++)
#define FD(i, a, b) for(ll i=(ll)(a); i>=(ll)(b); i--)

#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);
#define RTIME(start, end) ((double)(end-start)/(double)CLOCKS_PER_SEC)
#define D(a) cout<<a<<endl
#define MAX 200010

struct edge
{
	ll a, b, cost;
	edge(ll x, ll y, ll z):a(x), b(y), cost(z) {};
};


int main()
{
    fastio()

#ifndef ONLINE_JUDGE
   	freopen("input.txt", "r", stdin);
   	freopen("output.txt", "w", stdout);
#endif

    ll n;
    cin>>n;
    string a, b;
    cin>>a>>b;
    ll ans=0;
    F(i, 0, n-1)
    {
      if(a[i] == b[i])
        continue;
      if(a[i+1] != b[i+1] && a[i] != a[i+1] && i+1 < n)
      {
        ans++;
        i++;
      }
      else
        ans++;
    }

    cout<<ans<<endl;
    return 0;
  }
    