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
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef vector<pair<int,int> > vii;
typedef vector<long long> vll;
typedef vector<vll> vvll;
typedef vector<char> vc;
typedef vector<vc> vvc;
typedef vector<pair<long long,long long> > vpll;
typedef vector<bool> vb;
typedef vector<vb> vvb;

#define PI 3.141592653589793
#define MOD 1000000007
#define N 10000005
template<typename T> T gcd(T a,T b) { if(a==0) return b; return gcd(b%a,a); }
template<typename T> T pow(T a,T b, ll m){T ans=1; while(b>0){ if(b%2==1) ans=(ans*a)%m; b/=2; a=(a*a)%m; } return ans%m; }

int cnt[N];
int a[1000005];
int main()
{
  IOS;
  int l,r;
  int n,m;
  cin >> n;
  for(int i=0;i<n;i++)
   {
     cin >> a[i];
     cnt[a[i]]++;
   }
  cin >> m;
  vi v(N,1);
  v[0]=0,v[1]=0;
  for(int i=2;i<=N;i++)
   {
     if(v[i])
      {
        for(int k=(2*i);k<=N;k+=i)
         {
           cnt[i]+=cnt[k];
           v[k]=0;
         }
      }
   }
   for(int i=1;i<=N;i++)
    {
      if(!v[i])
       cnt[i]=0;
       cnt[i]+=cnt[i-1];
    }

    for(int i=0;i<m;i++)
     {
       cin >> l >>r;
       l=min(l,N+1);
       r=min(r,N);
       //cout << cnt[l]<<" "<< cnt[r]<<"\n";
       cout << cnt[r]-cnt[l-1]<<"\n";
     }
     return 0;
}
