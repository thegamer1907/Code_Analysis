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
ll n,k,ans,a[100005];
void solve(){
    cin>>n>>k;
    rep(i,1,n+1)cin>>a[i];
    rep(i,1,n+1){a[i]+=a[i-1];}
    rep(i,1,n+1){
        ll l=i-1,r=n,mid;
        while(r-l>1){
            mid=(l+r)/2;
            if(a[mid]-a[i-1]<=k)l=mid;
            else r=mid;
        }
        if(a[r]-a[i-1]<=k)ans=max(ans,r-i+1);
        else ans=max(ans,l-i+1);
    }
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