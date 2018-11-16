#pragma GCC optimize("Ofast")
#pragma GCC target("sse2,sse3,ssse3,sse4,avx,mmx,abm,popcnt,tune=native")
#include <bits/stdc++.h>
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define eb emplace_back
using namespace std;
using ll = long long; using ull = unsigned ll; using ld = long double; using pii = pair<int, int>;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
template<typename T> using ordset = __gnu_pbds::tree<T, __gnu_pbds::null_type, less<T>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;

#define x(a) real(a)
#define y(a) imag(a)
using G = ld; using point = complex<G>;
istream& operator>>(istream &is, point &p) {G x, y; is >> x >> y; p = {x, y}; return is;}
ostream& operator<<(ostream &os, const point &p) {os << p.x() << ' ' << p.y(); return os;}
G dot(const point &a, const point &b) {return a.x()*b.x() + a.y()*b.y();}
G crs(const point &a, const point &b) {return a.x()*b.y() - b.x()*a.y();}
G ori(const point &a, const point &b, const point &c) {return crs(b-a, c-b);}

signed main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0), cout << fixed << setprecision(10);
    int n, a, b; cin >> n >> a >> b; --a, --b;
    int l = -1;
    for(int i = 0; i < 30; ++i) if ((a^b)&(1<<i)) l = i;
    ++l;
    if (n == 1<<l) cout <<  "Final!";
    else cout << l;
}
