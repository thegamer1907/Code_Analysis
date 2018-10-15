/*input
100
01010

*/

#include<bits/stdc++.h>
using namespace std;

#define Fi              first
#define Se              second
#define S(n)            cin >> n
#define P(n)            cout << n
#define pb              push_back
#define pp              pop_back
#define pf              pop_front
#define nl              cout << "\n"
#define MIN(con)        (*min_element(ALL(con))) 
#define MAX(con)        (*max_element(ALL(con)))
#define mem(n, a)       memset((n), (a), sizeof(n))
#define ALL(cont)       (cont).begin(),(cont).end()
#define NX(cont)        next_permutation(ALL(cont))
#define PX(cont)        prev_permutation(ALL(cont))
#define F(i, n, r)      for(int i = (n); i < (r); i ++)
#define prec(n)         cout << fixed << setprecision(n)
#define PI              3.14159265358979323846264338327951
#define FH(it,c)        for(__typeof((c).begin()) it = (c).begin(); it != (c).end(); ++ it)
#define mp              make_pair
#define ff              first
#define ss              second
#define all(c)          c.begin(),c.end()
#define fill(a,v)       memset(a,v,sizeof a)
#define rep(i,a,b)      for(ll i=a;i<b;i++)
#define rrep(i,a,b)     for(ll i=a;i>=b;i--)
#define srep(i,s)       for(ll i=0;s[i]!='\0';i++)
#define nn              cout<<"\n"
#define sp              cout<<" "
#define mod             1000000007    //9
#define ifalse          ios_base::sync_with_stdio(false),cin.tie(NULL)

using ll = long long;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<string> vst;
typedef pair<ll,ll> pll;
typedef pair<char,ll> pcl;
typedef pair<string,ll> psl;
typedef set<ll> sll;
typedef set<char> sc;
typedef set<string> sst;
typedef map<char,ll> mcl;
typedef map<ll,ll> mll;
typedef map<string,ll> msl;

using ld = long double;
 
template < typename T > inline T LCM(T a, T b)            { return (a * b) / GCD(a, b); }
template < typename T > inline T GCD(T a, T b)            { ll t; while(a) { t = a; a = b % a; b = t; } return b; }
template < typename T > inline string toString(T a)       {return to_string(a); }  // Convert int to string
template < typename T > inline void toInt(string s, T &x) { stringstream str(s); str >> x;}  // Convert string to int

inline ll add(ll x, ll y) { x += y; if(x >= mod) x -= mod; return x; }
inline ll sub(ll x, ll y) { x -= y; if(x < 0) x += mod; return x; }
inline ll mul(ll x, ll y) { return ((x % mod) * (y % mod)) % mod; }

inline ll powr(ll a, ll b){
    ll x = 1LL;
    while(b) {
        if(b & 1) x = mul(x, a);
        a = mul(a, a);
        b >>= 1;
    }
    return x;
}

inline ll inv(ll a) { return powr(a, mod - 2);}

const int inv2 = (mod + 1) >> 1;
const ll INF =  999999999999999999;
const int inf = 999999999;

bool check(ll n)
{
    if(n == 1) return 0;
    if(n == 2 or n == 3) return 1;
    if(n % 2 == 0 or n % 3 == 0) return 0;

    for(ll i = 5; i * i <= n; i += 6) if(n % i == 0 or n % (i + 2) == 0) return 0;
    return 1;
}


/****************************************************START********************************************************************/
const int N = 1e6 + 1;

int main()
{
    ifalse;
    int k;
    string s;
    cin >> k >> s;

    ll cnt[N] = {0};
    cnt[0] = 1;
    int s1 = 0;
    for(auto x: s) {
        s1 += (x == '1');
        cnt[s1] ++;
    }
    ll ans = 0;
    for(int i = k; i <= s1; i ++) {
        if(k == 0) {
            ans += (cnt[i] - 1) * cnt[i] / 2;
        }
        else {
            ans += (cnt[i] * cnt[i - k]);
        }
    }
    cout << ans;
    return 0;
}