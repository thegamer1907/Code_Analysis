#include<bits/stdc++.h>
using namespace std;
typedef long long ll;typedef unsigned long long ull;typedef double db;typedef long double ldb;
ll maxi = 1 << 19;const ll mod = 1000000007;const ll inf = 0x3f3f3f3f;const ll ll_inf = 0x3f3f3f3f3f3f3f3f;const db pi = acos(-1);
#define mp make_pair  
#define fi first  
#define se second  
#define pb(x) push_back(x) 
#define lb lower_bound
#define ub upper_bound
#define sz(x) (int)(x).size()
#define all(x) x.begin(),x.end()
#define len(s) s.size()
typedef vector<ll> vl; typedef pair<ll, ll> pll; typedef map<ll, ll> mll;typedef tuple<ll, ll, ll> t3;
#define s(x) scanf("%d", &x)
#define sd(x) scanf("%lf", &x)
#define sl(x) scanf("%lld", &x)
#define sc(x) scanf(" %c", &x)
#define p(x) printf("%d",x)
#define pl(x) printf("%lld", x)
#define pd(x) printf("%lf", x)
#define pw(x) printf("%s",x)
#define pc(x) printf("%c",x)
#define pn() printf("\n") 
#define psp() printf(" ")
#define loop(i,n) for(ll (i)=0;(i)<(ll)(n);++(i))
#define rep(i,l,u) for(ll (i)=(ll)(l);(i)<(ll)(u);++(i))
#define repe(i,l,u) for(ll (i)=(ll)(l);(i)<=(ll)(u);++(i))
#define repr(i,l,u) for(ll (i)=(ll)(l);(i)>(ll)(u);--(i))
#define repre(i,l,u) for(ll (i)=(ll)(l);(i)>=(ll)(u);--(i))
#define reps(i,s) for(ll (i)=(ll)(0);(i)<len(s);++(i))
#define repit(itr,c) for(__typeof((c).begin()) itr=(c).begin();itr!=(c).end();itr++) 
#define iter(itr,c) __typeof((c).begin()) itr
void input(int n,int a[]){loop(i,n)cin>>a[i];}
void input1(int n,int a[]){repe(i,1,n)cin>>a[i];}
ll gcd(ll a, ll b) {if (b == 0) return a;return gcd(b, a%b);}
ll bin_expo(ll A, ll B, ll M){ll res = 1LL;while (B > 0){if(B % 2 == 1){res = (res * A) % M;}A = (A * A) % M; B = B / 2;}return res;}
ll ceilfun(ll a,ll b){return a/b+(a%b!=0);}

int main()
{
  ll n,t;
  sl(n);sl(t);
  ll a[n+1];
  rep(i,1,n+1)sl(a[i]);
  ll j=1;
  while(j!=t)
  {
  	if(j>t)
  	{
  		pw("NO");
  		return 0;
  	}
  	j=j+a[j];
  }
  pw("YES");

}