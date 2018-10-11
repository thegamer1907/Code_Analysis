#include<bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define MOD 1000000007
#define mp make_pair
#define fi first
#define se second
#define ms(s, n) memset(s,n,sizeof(s))
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); i--)
#define all(x) x.begin(),x.end()
 
typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef pair<ll,ll> pl;
 
ll fpow(ll n,ll k,ll p = MOD){ll r=1;for(;k;k>>=1){if(k&1)r=r*n%p;n=n*n%p;}return r;}
ll inv(ll a,ll p=MOD){return fpow(a,p-2,p);}
ll Sqrt(ll x){if(x==0 || x==1)return x;ll start=1,end=x,ans;while(start<=end){ll mid=(start+end)/2;if(mid*mid==x)return mid;if(mid*mid<x){start=mid+1;ans=mid;}else end=mid-1;}return ans;}
ll power(ll x,ll y){if (y==0)return 1;else if (y%2==0)return power(x,y/2)*power(x,y/2);else return x*power(x,y/2)*power(x,y/2);}  
ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b; b=r;} return a;}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
void in(ll &no){bool neg=false;register ll c;no=0;c=getchar();if(c=='-'){neg=true;c=getchar();}for(;(c>47&&c<58);c=getchar())no=no*10+c-48;if(neg)no*=-1;}
ll maxx(ll a,ll b){if(a>b)return a;return b;}


ll find(ll l,ll r,ll k,ll n)
{
 ll m=l+(r-l)/2;
 if(m<k)
 {
 	return find(m+1,r,k,n-1);
 }
 else if(m>k)
 {
 	return find(l,m-1,k,n-1);
 }
 else
  return n;

}
int main() {  
ll n,k;
cin>>n>>k;
ll len=1;
for(ll i=0;i<n-1;i++)
{
	len=len*2+1;
}

cout<<find(1,len,k,n);
return 0;
}