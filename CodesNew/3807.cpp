#include<bits/stdc++.h>
using namespace std;

#define pi 3.141592654
#define hell 10000007
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
ll n,ans,a[100005];
bool check(ll x){
    ll res=0;
    rep(i,1,n+1){
        if(a[i]>x)return 0;
        res+=x-a[i];
    }
    return (res>=x);
}
void solve(){
    cin>>n;
    rep(i,1,n+1)cin>>a[i];
    ll l=1,r=2e9,mid;
    while(r-l>1){
        mid=(l+r)/2;
        if(check(mid))r=mid;
        else l=mid;
    }
    if(check(l))ans=l;
    else ans=r;
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