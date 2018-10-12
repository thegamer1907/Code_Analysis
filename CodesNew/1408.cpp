#include<bits/stdc++.h>
using namespace std;

#define pi 3.141592654
#define hell 998244353
#define io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define fix(n) cout << fixed << setprecision(n)
#define in1(n,c) c n;cin>>n
#define in2(a,b,c) c a,b;cin>>a>>b
#define ina(a,n,c) c a[n];rep(i,0,n)cin>>a[i]
#define ins(s) string s;cin>>s
#define mset(a,n) memset(a,n,sizeof a)
#define Max(a,b) ((a)>(b)?(a):(b))
#define Min(a,b) ((a)<(b)?(a):(b))
#define rep(i,a,b) for (__typeof((b)) i=(a);i<(b);i++)
#define repp(i,a,b,p) for(__typeof((b)) i=(a);i<(b);i+=p)
#define ren(i,a,b) for(__typeof((a)) i=(a);i>=(b);i--)
#define ll  long long
#define ull unsigned long long
#define ld long double
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define piii pair<pair<int,int>,int>
#define all(v) (v).begin(), (v).end()
#define sz(x) (int)x.size()
#define out(n) cout<<n<<" "
#define outl(n) cout<<n<<endl
#define line cout<<endl
#define bug(n) {outl(n);return;}
ll n[3],p[3],r,f[3],c,ans;
string s;
bool check(ll x){
    vll e(3,0);
    rep(i,0,3)e[i]=x*f[i]-n[i];
    c=0;
    rep(i,0,3)c+=max(0ll,e[i]*p[i]);
    if(r>=c)return 1;
    return 0;
}
void solve(){
    cin>>s;
    cin>>n[0]>>n[1]>>n[2];
    cin>>p[0]>>p[1]>>p[2];
    cin>>r;
    rep(i,0,sz(s)){
        if(s[i]=='B')f[0]++;
        else if(s[i]=='S')f[1]++;
        else f[2]++;
    }
    ll L=0,R=1e15,mid;
    while(R-L>1){
        mid=(L+R)/2;
        if(check(mid))L=mid;
        else R=mid;
    }
    if(check(R))ans=R;
    else ans=L;
    outl(ans);
}
int main(){
    io;
    int t=1;
    // cin>>t;
    while(t--)
        solve();
    return 0;
}