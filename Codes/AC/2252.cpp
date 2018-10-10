#include<bits/stdc++.h>
using namespace std;

#define pi 3.141592654
#define hell 1000000007
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
#define piii pair<pair<int,int>,int>
#define all(v) (v).begin(), (v).end()
#define sz(x) (int)x.size()
#define out(n) cout<<n<<" "
#define outl(n) cout<<n<<endl
#define line cout<<endl
#define bye(n) {out(n);return;}
#define byee {outl(-1);return;}
#define byeeno {outl("No");return;}
ll n,a[1000005],m[10000005],p[10000005];
void sieve(){
    p[0]=0;
    rep(i,0,10000005)p[i]=i;
    rep(i,2,(ll)sqrt(10000005)+1){
        if(p[i]==i){
            for(ll j=i;j<10000005;j+=i)
                p[j]=i;
        }
    }
}
void solve(){
    cin>>n;
    sieve();
    rep(i,0,n)cin>>a[i];
    rep(i,0,n){
        ll x;
        while(a[i]>1){
            x=p[a[i]];
            m[x]++;
            while(a[i]%x==0)a[i]/=x;
        }
    }
    // rep(i,0,10)outl(i<<" "<<m[i]);
    rep(i,1,10000005){
        m[i]+=m[i-1];
    }
    in1(q,ll);
    while(q--){
        in2(l,r,ll);
        r=min((ll)1e7,r);
        if(r<l)outl(0);
        else outl(m[r]-m[l-1]);
    }
}
int main(){
    io;
    int t=1;
    // cin>>t;
    while(t--)
        solve();
    return 0;
}