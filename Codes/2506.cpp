/*input
3
1 1 1
*/
#include <bits/stdc++.h>
#define pb push_back
#define epb emplace_back
#define mp make_pair
#define pr pair<int,int>
#define all(x) x.begin(),x.end()
#define in1(x) scanf("%d",&x)
#define in2(x) scanf("%lld",&x)
#define pf2(x) printf("%lld\n",x)
#define f(x,y,z) for(x=y;x<z;++x)
#define rev(x,y,z) for(x=z-1;x>=y;--x)
#define pf(x) printf("%d\n",x)
#define pfs(s) printf("%s\n",s)
#define out(s) cout<<s<<"\n"
#define in(s) cin>>s
#define st string
#define X first
#define Y second
using namespace std;
typedef long long ll;typedef vector<int> vi;typedef vector<ll> vl;typedef vector<bool> vb;
ll modpow(ll x, ll y, ll m){ll z=1;while(y){if(y&1)z=(z*x)%m;x=(x*x)%m;y>>=1;}return z;}
int egcd(int a, int b, int& x, int& y){if(a == 0){x= 0;y= 1;return b;}int x1, y1;int gcd= egcd(b%a, a, x1, y1);x= y1 - (b/a) * x1;y= x1;return gcd;}
string z[2]={"NO","YES"};
ll mod=1e9+7;
vl cnt(10000001);
vi pri(10000001);
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string s;
    int i,j,k,n,m;
    f(i,2,3170)
    {
      if(pri[i] && pri[i]!=i)
        continue;
      pri[i]=i;
      for(j=2;j*i<=1e7;++j)
        if(!pri[i*j])
          pri[i*j]=i;
    }
    f(i,3170,1e7)
      if(!pri[i])pri[i]=i;
    in(n);
    f(i,0,n)
    {
      int a;in(a);
      set<int> p;
      while(a>1)
      {
        p.insert(pri[a]);
        a/=pri[a];
      }
      for(auto x:p)
        cnt[x]++;
    }
    f(i,3,1e7+1)
      cnt[i]+=cnt[i-1];
    in(m);
    while(m--)
    {
      int l,r;
      in(l>>r);
      l=min(l,10000000);
      r=min(r,10000000);
      out(cnt[r]-cnt[l-1]);
    }
    return 0;
}