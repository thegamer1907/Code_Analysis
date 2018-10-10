#pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

//#undef _GLIBCXX_DEBUG //(compiler options)
#include <bits/stdc++.h>
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define eb emplace_back
#define fst first
#define snd second
using namespace std;
using ll = long long; using ull = unsigned ll; using ld = long double; using pii = pair<int, int>; using pll = pair<ll, ll>; using vi = vector<int>;
template<typename T> T mind(T &x, const T &y) {if (y < x) {T d = y-x; x = y; return d;} else return 0;} //RETURNS A NON-POSITIVE VALUE
template<typename T> T maxd(T &x, const T &y) {if (y > x) {T d = y-x; x = y; return d;} else return 0;}
const int mod = 1e9+7, mod9 = 1e9+9, infi = 1e9+100; const ll infl = 1e18L+1000, modl = 1e18L+3; const ld infd = INFINITY;

#define x(a) real(a)
#define y(a) imag(a)
using G = ll; using point = complex<G>;
istream& operator>>(istream &is, point &p){G x, y; is >> x >> y; p = {x, y}; return is;}
ostream& operator<<(ostream &os, const point &p){os << p.x() << ' ' << p.y(); return os;}
G dot(const point &a, const point &b) {return (conj(a)*b).x();}
G crs(const point &a, const point &b) {return (conj(a)*b).y();}
G ori(const point &a, const point &b, const point &c) {return crs(b-a, c-b);};
bool cmpyx(const point &a, const point &b) {return a.y()<b.y() || (a.y()==b.y()&&a.x()<b.x());};

int dsm(int x) {
    int res = 0;
    while(x) {
        res += x%10;
        x /= 10;
    }
    return res;
}

signed main()
{
    #ifndef LOCAL
    //ifstream cin("hull.in"); ofstream cout("hull.out");
    #endif // LOCAL
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0), cout << fixed << setprecision(15);
    int k; cin >> k;
    for(int i = 1, cnt = 0; ; ++i) {
        if (dsm(i) == 10) ++cnt;
        if (cnt == k) return cout << i, 0;
    }
}
