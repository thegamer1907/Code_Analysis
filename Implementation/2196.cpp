#include <bits/stdc++.h>

#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")

using namespace std;

#define sp ' '
#define tb '\t'
#define en '\n'

#define _str(x) #x
#define pp(x) make_pair(_str(x), x)
#define ww(x) _str(x) << " = " << x


template <class Os, class It>
Os&& _out (Os&& os, It f, It l, string d = ", ") {
	if(f == l) return os << "{}";
	os << "{ " << *f++;
	for(; f != l; os << d << *f++);
	return os << " }";
}

template <class Os, class T>
auto operator << (Os&& os, const T& v)
-> decltype(v.begin(), v.end(), os) {
    return _out(os, v.begin(), v.end());
}

template <class Os, class F, class S>
Os&& operator << (Os&& os, const pair<F, S>& p) {
    return os << "[" << p.first << ", "
                     << p.second << "]";
}

using ll = long long;
using uint = unsigned int;
using ull = unsigned long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using ld = long double;

const long double PI = acos(-1);
complex<double> IM {0, 1};

int main()
{
    ios_base::sync_with_stdio(false);

    int n; cin >> n;
    int x = 0, y = 0, z = 0;
    for(; n--;) {
        int xx, yy, zz; cin >> xx >> yy >> zz;
        x += xx; y += yy; z += zz;
    }
    cout << (x || y || z ? "NO" : "YES");

    return 0;
}

/**


*/
