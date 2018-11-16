#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/priority_queue.hpp>

#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")

using namespace std;

#define sp ' '
#define en '\n'

#define _str(x) #x
#define ww(x) _str(x) << " = " << x

struct _flag_t { string val; }
const _1d {", "}, _2d {"\n  "};
_flag_t _flag = _1d;

ostream& operator << (ostream& os, _flag_t flag)
{ _flag = flag; return os; }

template <class It>
ostream& _out (ostream& os, It f, It l) {
    if(f == l) return os << "{}";
    _flag_t cur_flag = _flag;
    os << _1d << "{ " << *f;
    for(; ++f != l; os << cur_flag.val << *f);
    return os << " }";
}

template <class C>
auto operator << (ostream& os, C const& cont)
	-> decltype( begin(cont), end(cont), cont.size(), declval<ostream&>() )
{ return _out(os, begin(cont), end(cont)); }

ostream& operator << (ostream& os, string const& s)
{ return os << s.data(); }

template <class X, class Y>
ostream& operator << (ostream& os, pair<X,Y> const& p)
{ return os << "[" << p.first << ", " << p.second << "]"; }


using ll = long long;
using ull = unsigned long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

template <class K, class T>
using hash_table = __gnu_pbds::cc_hash_table<K, T>;
//using hash_table = unordered_map<K, T>;

template <class T, class Cmp>
using pr_queue = __gnu_pbds::priority_queue<T, Cmp, __gnu_pbds::rc_binomial_heap_tag>;

constexpr ld PI = acos(-1);
constexpr ld PIH = PI * 0.5;
constexpr ld PID = PI * 2.0;

constexpr complex<ld> IM {0, 1};

template <class T> using row = vector<T>;
template <class T> using mat = vector<row<T>>;
template <class T> mat<T>
make_mat(size_t n, size_t m, T val = 0)
{ return mat<T>(n, row<T>(m, val)); }


int main()
{
    ios_base::sync_with_stdio(false);
//    freopen("inverse.in", "r", stdin);
//    freopen("inverse.out", "w", stdout);

    ll n; cin >> n;
    ll k = 0;
    for(; n; n/= 10ll) {
        ll d = n % 10ll;
        k += bool(d == 4 || d == 7);
    }
    if(k == 0) goto NO;
    
    for(; k; k/= 10ll) {
        ll d = k % 10ll;
        if(d != 4 && d != 7) goto NO; 
    }
    cout << "YES";
    return 0;
    NO:
    cout << "NO";
    return 0;
}

/**

CHECK !!!
int overflow
special cases ( n == 0, n == 1 , ... )

*/
