/*----------------
    Smit Patel
     DA-IICT
----------------*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define fori(i,a,n) for(int i=a; i<n; i++)
#define ford(i,a,n) for(int i=a; i>n; i--)
#define clr(a,b) memset(a,b,sizeof(a))
#define deb(x) cout<<#x<<" : "<<x<<endl;
#define debug(x,y) cout<<#x<<" : "<<x<<"\t"<<#y<<" : "<<y<<endl;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define sd(n) scanf("%d",&n)
#define sld(n) scanf("%lld",&n)
#define pd(n) printf("%d\n",n)
#define pld(n) printf("%lld\n",n)
#define mod 1000000007
#define eps 1e-6
#define infi 1000000002
#define infll 1e18+5
#define N 100005
#define LN 20

typedef long long ll;
typedef map<int, int> mii;
typedef map<ll,ll> mll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef set<int> si;

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n,s;
  cin>>n>>s;
  ll a[n+1],sum[n+1];
  fori(i,1,n+1) cin>>a[i]; a[0]=0,sum[0]=0;
  ll l=0,r=n,ans=0;
  while(l<r) {
		ll mid=(l+r+1)/2;
    fori(i,1,n+1) sum[i]=a[i]+mid*i;
	  sort(sum+1,sum+n+1),ans=0;
	  fori(i,1,mid+1) ans+=sum[i];
	  if(ans<=s) l=mid;
	  else r=mid-1;
	}
  fori(i,1,n+1) sum[i]=a[i]+l*i;
  sort(sum+1,sum+n+1),ans=0;
  fori(i,1,l+1) ans+=sum[i];
  cout<<l<<" "<<ans<<endl;
  return 0;
}

ll choose(ll n,ll k)
{
  if(k==0)
    return 1;
  return (n* choose(n-1,k-1))/k;
}

bool isprime(ll n)
{
  for(ll i=2;i*i<=n;i++)
  {
    if(n%i==0)
      return false;
  }
  return true;
}

int gcd(int a,int b)
{
  if(a==0)
    return b;
  return gcd(b%a,a);
}

int power(int x,int y,int p)
{
  int res=1;
  x=x%p;
  while(y>0)
  {
    if(y&1)
      res=(res*x)%p;
    y=y>>1;
    x=(x*x)%p;
  }
  return res;
}
