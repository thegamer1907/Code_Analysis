#include <bits/stdc++.h>

using namespace std;

#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
#define FORE(a,b) for(auto& a : b)
#define pb(x) push_back(x)
#define mset(a,x) memset(a,x,sizeof(a))
#define endl "\n"
#define mp(a,b) make_pair(a,b)
#define ss second
#define ff first

typedef long long ll_;
typedef vector<int> vi_;
typedef vector<long long> vll_;
typedef pair<int,int> pii_;

const int INF = 1<<30;
inline int two(int n) { return 1 << n; }
inline int test(int n, int b) { return (n>>b)&1; }
inline void set_bit(int & n, int b) { n |= two(b); }
inline void unset_bit(int & n, int b) { n &= ~two(b); }
inline int last_bit(int n) { return n & (-n); }
inline int ones(int n) { int res = 0; while(n && ++res) n-=n&(-n); return res; }

inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }
template<class T> void chmax(T & a, const T & b) { a = max(a, b); }
template<class T> void chmin(T & a, const T & b) { a = min(a, b); }

#define N 100010
#define MOD (int)(1e9+7)
#define lc(x) 2*x+1
#define rc(x) 2*x+2
#define pa(x) ((x-1)/2)

int a[N];

int main() {
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,t;
    cin >> n >> t;

    a[0] = 0;
    FOR(i,1,n) {
        cin >> a[i];
        a[i] += a[i-1];
    }

    int ans = 0;
    REP(i,n) {
        // DEBUG(i);
        auto it = lower_bound(a+i,a+n+1,t+a[i]);
        if(it == a + n + 1 || *it > t+a[i]) it--;
        ans = max(ans, (int)(it - a - i));
        // DEBUG(it-a-i);
    }

    cout << ans << endl;
    return 0;

}