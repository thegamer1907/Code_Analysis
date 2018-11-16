#ifndef home
#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,unroll-all-loops")
#pragma GCC target("abm,mmx,popcnt,avx,tune=native,sse,sse2,sse3,ssse3,sse4,sse4a")
#endif

#include <bits/extc++.h>

using namespace std;
using namespace __gnu_cxx;
using ll = long long;
using pll = pair<ll, ll>;
using lint = long long;
using pii = pair<int, int>;
template<class X, class C=less<X>, class Y=__gnu_pbds::null_type> using ordered_set=
__gnu_pbds::tree<X, Y, C, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;
template<class X, class C=greater<X>> using heap=__gnu_pbds::priority_queue<X, C>;
#define mp make_pair
#define lowb lower_bound
#define upb upper_bound
#define foru(i, l, r) for(auto i = l; i < r; ++i)
#define forn(i, n) foru(i,0,n)
#define ford(i, r, l) for(auto i = r; i >= l; --i)
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define eb emplace_back
#define pb push_back
//#define allocator_memory 2e8
#ifdef allocator_memory
char allmem[(size_t) allocator_memory];
size_t allpos;

inline void *operator new(size_t n) {
    char *p = allmem + allpos;
    allpos += n;
    assert(allpos <= (size_t) allocator_memory);
    return (void *) p;
}

inline void operator delete(void *, size_t)noexcept {}
inline void operator delete(void *)noexcept {}
#endif

template<class X>
inline void mini(X &a, X b) {
    a = min(a, b);
}

template<class X>
inline void maxi(X &a, X b) {
    a = max(a, b);
}
//-------------------------------------------------------------------------------------------


int main() {
#ifdef home
    assert(freopen("../input.txt", "r", stdin));
#endif
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout << setprecision(11) << fixed;
    int n, a, b;
    cin >> n >> a >> b;
    a--;
    b--;
    int c = a ^b;
    int pw = 0;
    while ((1 << (pw)) <= c)pw++;
//    cerr << pw << ' ' << c << endl;
    if ((1 << (pw)) == n)cout << "Final!";
    else cout << pw;
    return 0;
}