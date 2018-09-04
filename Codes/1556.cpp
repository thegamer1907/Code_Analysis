#include <bits/stdc++.h>
using namespace std;
 
#define mp make_pair
#define pb push_back
#define F first
#define S second
#define boost ios::sync_with_stdio(false);cin.tie(NULL)
#define MOD 1000000007
 
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll,ll> pll;
 
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<bool> vb;
typedef vector<ii> vii;
typedef vector<vi> vvi;
 
inline ll max_(ll a, ll b) { return (a>b)?a:b; }
inline ll min_(ll a, ll b) { return (a<b)?a:b; }

ll ans,cost,n,m,s,x;
pll p[100005];

bool cmpfunc(pll &a, pll &b)
{
	return (a.F+x*a.S)<(b.F+x*b.S);
}

bool possible()
{
	ll i;
	x=min_(m,n);

	sort(p,p+n,cmpfunc);

	ll tmp=0;
	for (i=0;i<x;i++) {
		if ((tmp+p[i].F+x*p[i].S)<=s)
			tmp+=p[i].F+x*p[i].S;
		else {
			return false;
		}
	}

	ans=x;
	cost=tmp;

	return true;
}

int main() 
{
	boost;
	if(fopen("inp.txt", "r")){
	  freopen("inp.txt", "r", stdin);
	  freopen("outp.txt", "w", stdout);
    }

    ll i;
    cin>>n>>s;

    for (i=0;i<n;i++) {
    	cin>>p[i].F;
    	p[i].S=i+1;
    }

    ll l=0LL,h=1000000LL;

    while (l<=h) {
    	m=l+((h-l)>>1);
    	if (possible()) {
    		l=m+1;
    	}
    	else
    		h=m-1;
    }

    cout<<ans<<" "<<cost;
    return 0;
}