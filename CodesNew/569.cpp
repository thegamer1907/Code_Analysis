/*
 #######################################################
 #                                                     #
 #        masaka :(               #
 #                                                     #
 #######################################################
  * */
  #include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned ll
#define ld long double 
#define vll vector< ll >
#define M 10000000ll
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
const ll inf=(ll)1e16;
ll _mx=-inf;
inline ll mulD(ll a,ll b){ll r=0;while(b>0){if(b&1){r=r+a%md;r=r%md;}b/=2;a=2*a%md;a=a%md;}return r%md;;}
inline ll exp(ll a,ll b){ll r=1LL;while(b>0){if(b&1){r=r*(a%md);r=(r+md)%md;}b/=2;a=(a%md)*(a%md);a=(a+md)%md;}return (r+md)%md;}
ll gcd(ll a,ll b){if(b==0)return a;return gcd(b,a%b);}
inline ll poww(ll a,ll b){ll r=1LL;while(b>0){if(b&1)r=r*a;b/=2;a=a*a;}return (ll)r;}
ll a[M+1],pr[M+1],dp[M+1];
int main() {

    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);//ifstream fin("input.txt");ofstream fout("output.txt");
    ll t,i,s,j,m,x,y,z,k,q,n,p,T;string s1,s2,s3;x=0;
    cin>>n;
    forn(i,1,n){
    	cin>>x;++a[x];
    }map<ll,ll> mp;
    for(i=2;i<=M;++i){
    	if(pr[i]==0){
    		pr[i]=a[i];
    		for(j=2*i;j<=M;j+=i){
    			pr[j]=-1;
    			pr[i]+=a[j];
    		}
    	}
    }
    // forn(i,2,11)cout<<pr[i]<<" ";
    forn(i,2,M)if(pr[i]==-1)dp[i]=dp[i-1];else dp[i]=dp[i-1]+pr[i];

    cin>>q;
    while(q--){
    	cin>>x>>y;
    	cout<<dp[min(y,M)]-dp[min(M,x-1)]<<"\n";
    }



}