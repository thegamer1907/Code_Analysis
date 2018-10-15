/*
 #######################################################
 #                                                     #
 #        masaka :(               #
 #                                                     #
 #######################################################
  * */
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace std;
#define ll long long
#define ull unsigned ll
#define ld long double
#define vll vector< ll >
#define M 300100
#define LN 14
#define pb push_back
#define forn(i,a,b) for(ll i=(a);i<=(b);++i)
#define ford(i,a,b) for(ll i=(a);i>=(b);--i)
#define pii pair<ll,ll>
#define vec(a) vector<a >
#define se second
#define fi first
#define ins insert
#define inchar
#define outchar(x) putchar_unlocked(x)
#define seta(a) memset((a),-1,sizeof((a)))
inline ll getint(){
    ll _x=0,_tmp=1; char _tc=getchar();
    while( (_tc<'0'||_tc>'9')&&_tc!='-' ) _tc=getchar();
    if( _tc == '-' ) _tc=getchar() , _tmp = -1;
    while(_tc>='0'&&_tc<='9') _x*=10,_x+=(_tc-'0'),_tc=getchar();
    return _x*_tmp;
}
#define MD 1000000007
ll md=MD;
const ll inf=(ll)2e18;
ll _mx=-inf;
inline ll mulD(ll a,ll b){ll r=0;while(b>0){if(b&1){r=r+a%md;r=r%md;}b/=2;a=2*a%md;a=a%md;}return r%md;;}
inline ll exp(ll a,ll b){ll r=1LL;while(b>0){if(b&1){r=r*(a%md);r=(r+md)%md;}b/=2;a=(a%md)*(a%md);a=(a+md)%md;}return (r+md)%md;}
ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}
inline ll poww(ll a,ll b){ll r=1LL;while(b>0){if(b&1)r=r*a;b/=2;a=a*a;}return (ll)r;}
ll a[M],dp[M];
ll f(ll x,ll k,ll n){
    ll i;int ans=0;
    for(i=1;i+x-1<=n;++i){
        if(x-(dp[x+i-1]-dp[i-1])<=k)ans=1;
    }return ans;
}
int main() {

    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);//ifstream fin("input.txt");ofstream fout("output.txt");
    ll t,i,s,j,m,x,y,z,k,q,n,p,T;string s1,s2,s3;x=0;ll r;
    cin>>n>>k;
    forn(i,1,n)cin>>a[i];
    forn(i,1,n)dp[i]=dp[i-1]+a[i];
    p=n;x=0;
    for(;p>=1;p>>=1){
        while(f(p+x,k,n))x+=p;

    }
    for(i=1;i+x-1<=n;++i){
        if(x-(dp[x+i-1]-dp[i-1])<=k){
            for(j=i;j<=x+i-1;++j)a[j]=1;
            break;
        }
    }cout<<x<<"\n";
    forn(i,1,n)cout<<a[i]<<" ";


}