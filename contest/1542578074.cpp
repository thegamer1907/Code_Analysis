#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const ll MAX = 1e5 + 5;
const int N=2e5+5;
const ll mod = 1e9 + 7;
const ll mx=1e16;


#define SPEED ios_base::sync_with_stdio(false);cin.tie(NULL);
#define tc long long t; scanf("%lld\n",&t); while(t--)
#define f(ii,jj,nn) for(int ii=jj;ii<nn;ii++)
#define sl(x) scanf("%lld",&x)
#define sll(x,y) scanf("%lld %lld",&x,&y)
#define slll(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
#define pl(x) printf("%lld\n",x)
#define pf(x) printf("x\n")
#define mp(x,y) make_pair(x,y)
#define CLEAR(a) memset(a,0,sizeof(a))
#define eb(x) pop_back(x)
#define pb(x) push_back(x)
#define all(x) x.begin(),x.end()
#define fi first
#define se second
#define si(x) scanf("%d",&x)
#define pi(x) printf("%d\n",x)
#define sii(x,y) scanf("%d%d",&x,&y)
#define siii(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define MAX 1005

#define trace1(x)			     cout<<x<<endl;
#define trace2(x, y)             cout <<#x<<": "<<x<<" | "<<#y<<": "<<y<< endl;
#define trace3(x, y, z)          cout <<#x<<": "<<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl;
#define trace4(a, b, c, d)       cout <<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl;
#define trace5(a, b, c, d, e)    cout <<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<<": "<<e<<endl;
bool comp(const int a,const int b){return a>b;}
const double PI= 2*acos(0.0);

//---------------------------------------------------------------------------
ll fac[N];
void pre() {
    fac[0] = 1LL;
    f(i,1,N) {
        fac[i] = 1LL*i*fac[i - 1];
        if(fac[i] >= mod)
            fac[i] %= mod;
    }
}
ll power(ll a, ll b) {
    ll x = 1;
    while(b) {
        if(b&1) {
            x *= a;
            if(x >= mod) x %= mod;
        }
        a *= a;
        if(a >= mod) a %= mod;
        b >>= 1;
    }
    return x;
}
ll inv(ll k) {
    return power(k, mod - 2);
}
//-------------------------------------------------------------------------

int main()
{
  string s1,s2,s;
  cin>>s1;
  int n,f=0,f1=0,f11=0;
  cin>>n;
  while(n--)
  {
    cin>>s2;
    if(s2==s1)
    f11=1;
    s+=s2;
    if(s2[0]==s1[1])
    {
      f=1;
      s+=s2[0];
    }

    if(s2[1]==s1[0])
    {
      f1=1;
      s+=s2[1];
    }
  }
  //cout << s;
  //trace2(f,f1);
  if(f11){
  cout << "YES" << endl;
      return 0;
  }

    if(f&&f1)
  cout << "YES" << endl;
  else
  cout << "NO" << endl;
}