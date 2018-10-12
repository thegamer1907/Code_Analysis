#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

/** ----------STL shortcuts--------------*/

#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vll vector<ll>
#define vc vector<char>
#define vs vector<string>
#define vpll vector<pll>
#define vpii vector<pii>
#define PQ priority_queue
#define pb push_back
#define MP make_pair
#define UB upper_bound
#define LB lower_bound
#define F first
#define S second
#define rev(v) reverse(v.begin(),v.end())
#define srt(v) sort(v.begin(),v.end())
#define grtsrt(v) sort(v.begin(),v.end(),greater<ll>())
#define all(v) v.begin(),v.end()
#define mnv(v) *min_element(v.begin(),v.end())
#define mxv(v) *max_element(v.begin(),v.end())


            /** ---------------------Debugging---------------------*/

#define debug(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); deb(_it, args); }
void deb(istream_iterator<string> it) {cout<<endl;}
template<typename T, typename... Args>
void deb(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << ",   ";
    deb(++it, args...);
}
#define asche cerr<<"Ekhane asche\n";
#define what_is(x) cerr << #x << " is " << x << endl
#define printa(a,L,R) for(int i=L;i<R;i++) cout<<a[i]<<(i==R-1?'\n':' ')
#define printv(a) printa(a,0,a.size())
#define print2d(a,r,c) for(int i=0;i<r;i++) for(int j=0;j<c;j++) cout<<a[i][j]<<(j==c-1?'\n':' ')



            /** -------------------Other utilities---------------------*/

#define SQ(x) ((x)*(x))
#define issq(x) (((ll)(sqrt((x))))*((ll)(sqrt((x))))==(x))
#define mem(a,x) memset(a,x,sizeof(a))
#define inf 1e18
#define PI (acos(-1.0))
#define nl "\n"
#define lg(r,n) (int)(log2(n)/log2(r))
#define fast ios_base::sync_with_stdio(false)
#define one(x) __builtin_popcount(x)
#define Unique(v) v.erase(unique(all(v)),v.end())
#define stree ll l=(n<<1),r=l+1,mid=b+(e-b)/2
#define fout(x) fixed<<setprecision(x)
string tostr(int n) {stringstream rr;rr<<n;return rr.str();}
#define toint(a) atoi(a.c_str())
#define rep(i, begin, end) for (__typeof(end) i = (begin) - ((begin) > (end));i != (end) - ((begin) > (end));i += 1 - 2 * ((begin) > (end)))

//ll dx[]={1,0,-1,0,1,-1,-1,1};
//ll dy[]={0,1,0,-1,1,1,-1,-1};
#define valid(tx,ty) (tx>=0&&tx<n&&ty>=0&&ty<m)
//ll gcd(ll a,ll b){while(b){ll x=a%b;a=b;b=x;}return a;}
//ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
//ll qpow(ll n,ll k) {ll ans=1;assert(k>=0);while(k>0){if(k&1) ans=(ans*n)%mod;n=(n*n)%mod;k>>=1;}return ans%mod;}
const int mod=1e9+7;
const int mxn=1e5+9;
const ld eps=1e-9;

/**-------------------------------------------------------------------------------------------------------*/
int a[mxn], n;
struct Fuck{
    ll x;
    int id;
    Fuck(ll _x, int _id){
        x = _x;
        id = _id;
    }
    bool operator<(const Fuck& f)const{
        return x < f.x ;
    }
};
int dist(int x,int y)
{
    if(x<=y) return y-x;
    return (y+n)-x;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    vector<Fuck>ans;
    for(int i=0;i<n;i++){
        Fuck f = {a[i]+dist(a[i]%n, i), i};
        ans.push_back(f);
    }
    srt(ans);
    cout<<ans[0].id+1<<nl;
    return 0;
}

