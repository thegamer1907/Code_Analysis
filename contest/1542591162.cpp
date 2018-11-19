#include<bits/stdc++.h>
#define rep(a,b,c) for((a)=(int)(b);(a)<=(int)(c);(a)++)
#define per(a,b,c) for((a)=(int)(c);(a)>=(int)(b);(a)--)
#define mem(a) memset(a,0,sizeof(a))
#define mem1(a) memset(a,(-1),sizeof(a))
#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)
#define pb push_back
#define MP make_pair
#define fi first
#define se second
#define foreach(it,a) for(__typeof((a).begin()) it=(a).begin();it!=(a).end();it++)
#define sz(x) ((int)((x).size()))
#define all(x) ((x).begin()), ((x).end())
#define rall(x) ((x).rbegin()), ((x).rend())

using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair< ll,ll > pi;
typedef pair< ll,pi > pii;
typedef vector< ll > vi;
typedef vector< pi > vii;
const ll mod=1000000007;
const ll inf=1e12+21;
ll powmod(ll a,ll b){ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
template<typename N>N gcd(N a,N b){return b?gcd(b,a%b):a;}
void precision(ll pr){ cout.precision(pr); cout<<fixed; }

const int N=1e6+21;
string a[N];
ll x=0,y=0;
int main()
{
    ll i,j,k,n;
    string s="";
    cin>>s;
    cin>>n;
    rep(i,0,n-1) cin>>a[i];
    rep(i,0,n-1){
        if(a[i][1]==s[0]) x=1;
    }
    rep(i,0,n-1){
        if(a[i][0]==s[1]) y=1;
        if(a[i]==s) x=1,y=1;
    }
    if(x==1&&y==1) cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
