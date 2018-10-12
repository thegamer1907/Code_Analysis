#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define trace1(x)                cerr<<#x<<": "<<x<<endl
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<endl
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<endl
 
typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair<long long, long long> pll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll,ll> ii;
typedef vector<pair<ll,ll> > vii;
typedef vector<long long> vll;
typedef vector<vll> vvll;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<pair<long long,long long> > vpll;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef pair<ll,pair<ll,ll> > iii;
#define PI 3.141592653589793
#define mod (ll)(1000*1000*1000+7)
//# define N 300005
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=((ans%m)*(a%m))%m; b/=2; a=((a%m)*(a%m))%m; } return ans%m; }
# define INF (ll)1e18
# define LG 20  
typedef pair<ll,pair<ll,ll> > pii;
# define INF1 (ll)1e9+2
# define maxn 1000006

int main()
{
	ll k;
	cin >> k;
	string s;
	cin >> s;
	ll n=s.length();
	vector<ll>v(n+1);
	v[0]=0;
	for(ll i=0;i<s.length();i++)
	{
		if(s[i]=='1')
		{
			v[i+1]=1;
		}
		v[i+1]+=v[i];
	}

    ll ans=0;
    if(k==0)
    {
    	bool fnd=false;
    	ll cnt=0;
    	ll ans=0;
    	for(ll i=0;i<s.length();i++)
    	{
    		if(s[i]=='1')
    		{
    			ans+=(cnt*(cnt+1))/2;
    			cnt=0;
    		}
    		if(s[i]=='0')
    			{
    				cnt++;
    			}
    	}
    	ans+=(cnt*(cnt+1))/2;
    	cout << ans;
    	return 0;
    }
	for(ll i=1;i<=n;i++)
	{
		vector<ll>::iterator it1=lower_bound(v.begin(),v.end(),v[i-1]+k);
		if(it1==v.end())
			break;
        ll id1=it1-v.begin();
        it1=upper_bound(v.begin(),v.end(),v[i-1]+k);
        it1--;
        ll id2=it1-v.begin();
        //trace4(i,id1,id2,v[i]);
        ans+=(id2-id1+1);
	}
	cout << ans;
}