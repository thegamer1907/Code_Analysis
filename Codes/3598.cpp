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
# define INF (ll)5e15
# define LG 20  
typedef pair<int,pair<int,int> > pii;
# define INF1 (int)1e9+2
# define maxn 100005

//g++ -std=c++11 q4.cpp
int main()
{
   int n,m,k;
   cin >> n >> m >> k;
   ll x,s;
   cin >> x >> s;
   vi a,b,c,d;
   ll u;
   for(int i=0;i<m;i++)
   {
     cin >> u;
     a.pb(u);
   }
   for(int i=0;i<m;i++)
   {
     cin >> u;
     b.pb(u);
   }
   for(int i=0;i<k;i++)
    {
       cin >>u;
       c.pb(u);
    }
  for(int i=0;i<k;i++)
    {
       cin >> u;
       d.pb(u);
    }
    ll ans=(n*x);

    for(int i=0;i<m;i++)
    {
       if(b[i]>s)
         continue;
       ll mn=s-b[i];
       vector<ll>::iterator it=upper_bound(d.begin(),d.end(),mn);
       if(it==d.begin())
       {
         ll temp=(n)*a[i];
         ans=min(ans,temp);
       }
       else
       {
         it--;
         int id=it-d.begin();
         ll temp=(n-c[id])*a[i];
         ans=min(ans,temp);
       }
    }

    for(int i=0;i<k;i++)
     {
        if(d[i]>s)
         continue;
       ll temp=(n-c[i])*x;
       ans=min(ans,temp);
     }

     cout << ans;
}