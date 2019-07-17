#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
const int INF = int (1e9) + int (1e5);
const ll INFL = ll(2e18) + ll(1e10);
const ui MOD = 1E9 + 7;
const double EPS = 1e-9;
#define FOR(i,n) for (int i=0;i<(n);++i)
#define FOR2(i,a,b) for (int i=(a);i<(b);++i)
#define ROF(i,x) for(int i = (x) ; i >= 0 ; --i)
#define MP make_pair
#define ALL(a) (a).begin(),(a).end()
#define ODD(x) (((x)&1)==0?(0):(1))
#define sign(x) ((x > 0) - (x < 0))
std::mt19937_64  generator;

inline ll powmod(ll a,ll b,ll mod) {ll res=1;a%=mod; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%mod;a=a*a%mod;}return res;}
ll gcd(ll a, ll b) { return a ? gcd(b%a, a): b; }
ll lcm(ll a, ll b) { return a / gcd(a,b) * b; }

template<class T,class U>
ostream &operator<<(ostream &os,const pair<T,U> &x) {
    return os<<"("<<x.first<<","<<x.second<<")";
}
template<class T>
ostream &operator<<(ostream &os,const vector<T> &x) {
    os << '[';
    if ( !x.empty() ) {
        std::copy (x.begin(), x.end(), std::ostream_iterator<T>(os, ","));
        os << "\b";
    }
    os << "]";
    return os;
}
template<class T>
ostream &operator<<(ostream &os,const vector<vector<T> > &x) {
    os << '[';
    if ( !x.empty() ) {
        os << x[0];
        for (int i=1;i<x.size();++i) os << endl << " " << x[i];
    } else os << "[]";
    os << "]";
    return os;
}

void READ(){
    ios_base::sync_with_stdio(false); cin.tie(0);
#ifdef _DEBUG
    freopen ("in.txt", "r", stdin);
#endif
}

int main() {
    generator.seed(std::chrono::system_clock::now().time_since_epoch().count());
  //  READ();
    ll n,m,k;cin>>n>>m>>k;
    vector<ll> p(m);
    FOR(i,m) {cin>>p[i]; --p[i];}
    sort(p.begin(),p.end());
    ll start=0;
    int borrado=0;
    ll ret=0;
    ll sig=k;
    while (borrado<m){
        auto it=lower_bound(p.begin()+borrado,p.end(),sig+borrado)-p.begin();
        int cnt = it-borrado;
        if (cnt==0){
            ll nn= (p[it]-borrado)/k+1;
            if (nn*k<=p[it]-borrado) ++nn;
            sig = nn*k;
            start = sig-k;
            continue;
        }
        ++ret;
        int noborrados=sig-start-cnt;
        start += noborrados;
        borrado += cnt;
    }
    cout << ret;
    return 0;
}