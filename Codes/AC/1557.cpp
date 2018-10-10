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

ll ans,cost,n,m,s;
pll p[100005];

bool cmpfunc(pll &a, pll &b)
{
	return (a.F+m*a.S)<(b.F+m*b.S);
}

bool possible()
{
	ll i;
	sort(p,p+n,cmpfunc);

	ll tmp=0;
	for (i=0;i<m;i++) {
		if ((tmp+p[i].F+m*p[i].S)<=s) {
			tmp+=p[i].F+m*p[i].S;
		}
		else {
			return false;
		}
	}

	ans=m;
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

    ll l=0LL,h=n;

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