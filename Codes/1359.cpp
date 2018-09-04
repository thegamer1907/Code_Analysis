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
typedef vector<pair<int,int> > vii;
typedef vector<long long> vll;
typedef vector<vll> vvll;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<pair<long long,long long> > vpll;
typedef vector<bool> vb;
typedef vector<vb> vvb;
typedef pair<int,pair<int,int> > iii;
#define PI 3.141592653589793
#define mod (ll)(1000*1000*1000+7)
//# define N 300005
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=((ans%m)*(a%m))%m; b/=2; a=((a%m)*(a%m))%m; } return ans%m; }
# define INF (ll)1e15
# define LG 20  
typedef pair<int,pair<int,int> > pii;
# define INF1 (int)1e9+2
# define maxn 100005
# define offset 5

 //cnt[105];
ll a[maxn];
int n,s;
bool check(ll mid)
{
	vi v;
	 for(ll i=0;i<n;i++)
	 {
	 	 v.pb(a[i]+((i+1)*mid));
	 }
	 sort(v.begin(),v.end());
	 ll ans=0;
	 for(int i=0;i<mid;i++)
	 {
	 	 ans+=v[i];
	 	 if(ans>s)
	 	 	return false;
	 }
	 return (ans<=s);
}


int main()
{
	 
	 cin >> n >> s;
	 for(int i=0;i<n;i++)
	 {
	 	 cin >> a[i];
	 }
	 ll lo=0;
	 ll hi=n;
	 ll ans;
	 while(lo<=hi)
	 {
	 	 ll mid=(lo+hi)/2;
	 	 if(check(mid))
	 	 {
	 	 	 ans=mid;
	 	 	 lo=mid+1;
	 	 }
	 	 else
	 	 {
	 	 	hi=mid-1;
	 	 }
	 }

     vi v;
	 for(ll i=0;i<n;i++)
	 {
	 	 v.pb(a[i]+((i+1)*ans));
	 }
	 sort(v.begin(),v.end());
	 ll sum=0;
	 for(int i=0;i<ans;i++)
	 	sum+=v[i];
	 cout << ans<<" "<< sum;


}