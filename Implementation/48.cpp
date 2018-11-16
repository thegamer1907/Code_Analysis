#undef __STRICT_ANSI__
//#define __GLIBCXX_DEBUG
//#pragma comment(linker, "/stack:200000000")
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define eb emplace_back
#define fst first
#define snd second
using namespace std;
using ll = long long; using ull = unsigned ll; using ld = long double; using pii = pair<int, int>;
using dd = ld; using cd = complex<dd>; using vcd = vector<cd>;
template<typename T> T mind(T &x, const T &y) {if (y < x) {T d = y-x; x = y; return d;} else return 0;} //RETURNS A NON-POSITIVE VALUE
template<typename T> T maxd(T &x, const T &y) {if (y > x) {T d = y-x; x = y; return d;} else return 0;}
template<typename T> ostream& operator<<(ostream& os, const vector<T> v) {for(T x : v) os << x << ' '; os << endl; return os;}
int log2f(int x) {return 8*sizeof(x) - __builtin_clz(x) - 1;}
int log2c(int x) {return 8*sizeof(x) - __builtin_clz(x) - !(x&(x-1));}
const int mod = 1e9+7, infi = 1e9+100; const ll infl = 1e18L+1000; const ld infd = INFINITY;

#define x(a) real(a)
#define y(a) imag(a)
using G = ll; using point = complex<G>;
istream& operator>>(istream &is, point &p){G x, y; is >> x >> y; p = {x, y}; return is;}
ostream& operator<<(ostream &os, const point &p){os << p.x() << ' ' << p.y(); return os;}
G dot(const point &a, const point &b) {return (conj(a)*b).x();}
G crs(const point &a, const point &b) {return (conj(a)*b).y();}
G ori(const point &a, const point &b, const point &c) {return crs(b-a, c-b);};
bool cmpyx(const point &a, const point &b) {return a.y()<b.y() || (a.y()==b.y()&&a.x()<b.x());};

signed main(){
    #ifdef LOCAL
    //ifstream cin("input.txt"); ofstream cout("output.txt");
    #endif // LOCAL
    int n, a, b; cin >> n >> a >> b;
    vector<int> t(n);
    iota(all(t), 1);
    int cnt=1;
    while (t.size() > 2) {
        vector<int> dst(t.size() / 2);
        for (int i = 0; i < t.size(); i+=2)
            if ((t[i]==a && t[i+1]==b) || (t[i]==b && t[i+1]==a)) {
                if ((1 << cnt) == n) cout << "Final!"; else cout << cnt;
                return 0;
                //return cout << (pow(2, cnt) == n ? "Final!" : to_string(cnt)), 0;
            } else if (t[i]==a || t[i+1]==a) dst.pb(a);
            else if (t[i]==b || t[i+1]==b) dst.pb(b);
            else dst.pb(t[i]);
        t = dst;
        //cout << t;
        cnt++;
    }
    cout << "Final!";
}
