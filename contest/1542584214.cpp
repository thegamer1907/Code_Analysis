/**#    ####     ####      ####    ####  ####  #########
 ####    ##     ##  ##      ##      ##    ##    ##     ##
 ## ##   ##    ##    ##     ##      ##    ##    ##      ##
 ##  ##  ##   ##      ##    ##########    ##    ##      ##
 ##   ## ##  ############   ##      ##    ##    ##      ##
 ##    ####  ##        ##   ##      ##    ##    ##     ##
####    ### ####      #### ####    ####  ####  #######**/

/** "To iterate is human, to recurse, divine." **/

#include <bits/stdc++.h>
using namespace std;

#define LL              long long
#define ULL             unsigned long long
#define FOR(i, a, b)    for(int i = a; i < b; i++)
#define REV(i, a, b)    for(int i = a - 1; i >= b; i--)
#define SET(a, v)       memset(a, v, sizeof a)
#define CPY(a, v)       memcpy(a, v, sizeof a)
#define VI              vector <int>
#define PB              push_back
#define ALL(v)          v.begin(), v.end()
#define PII             pair<int, int>
#define MP              make_pair
#define X               first
#define Y               second
#define BUG()           cout<<"BUG!"<<endl
#define BUG1(a)         cout<<#a<<a<<endl
#define BUG2(a,b)       cout<<#a<<a<<" "<<#b<<b<<endl
#define BUG3(a,b,c)     cout<<#a<<a<<" "<<#b<<b<<" "<<#c<<c<<endl
#define BUG4(a,b,c,d)   cout<<#a<<a<<" "<<#b<<b<<" "<<#c<<c<<" "<<#d<<d<<endl
#define CASE()          int tc, cs = 0; cin >> tc; while(tc--)
#define PCASE()         printf("Case %d:", ++cs)
#define NL()            printf("\n")
#define READ(a)         freopen(a, "r", stdin)
#define WRITE(a)        freopen(a, "w", stdout)

template <class T> inline T sqr(T x) {
    return x * x;
}

template <class T> inline double euc_dis(T x1, T y1, T x2, T y2) {
    T x = x2 - x1, y = y2 - y1;
    return sqrt(0.0 + x * x + y * y);
}

template <class T> inline T ham_dis(T x1, T y1, T x2, T y2) {
    T x = x2 - x1, y = y2 - y1;
    return abs(x) + abs(y);
}

template <class T> inline T bigmod(T b, T p, T M) {
    LL ret = 1;
    for (; p > 0; p >>= 1) {
        if (p & 1) ret = (ret * b) % M;
        b = (b * b) % M;
    }
    return (T) ret;
}

template <class T> inline T modinv(T b, T M) {
    return bigmod(b, M - 2, M);
}

template <class T> inline T gcd_euclid(T a, T b, T &x, T &y) {
    if (a == 0) {
        x = 0, y = 1;
        return b;
    }
    T x1, y1, gcd = gcd_euclid(b % a, a, x1, y1);
    x = y1 - (b / a) * x1, y = x1;
    return gcd;
}

template <class T> inline T __lcm(T a, T b) {
    return (a * b) / __gcd(a, b);
}

template <class T> inline T inGrid(T x, T y, T r, T c) {
    return (x >= 0 && x < r && y >= 0 && y < c ? 1 : 0);
}

int dx4[] = {1, 0, -1, 0};
int dy4[] = {0, 1, 0, -1};
int dx8[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy8[] = {1, -1, -1, 0, 1, -1, 0, 1};
int kx8[] = {1, 1, 2, 2, -1, -1, -2, -2}; // knight move
int ky8[] = {2, -2, 1, -1, 2, -2, 1, -1};
int rw[] = {0, 0, 1, -1, 0, 0}; // 3D move
int cl[] = {1, -1, 0, 0, 0, 0};
int hi[] = {0, 0, 0, 0, 1, -1};

const double PI = acos(-1.0), EPS = 1e-7;

template<class T> T toRad(T deg) {
    return (deg * PI) / (180.0) ;
}

template<class T> T toDeg(T rad) {
    return (rad * 180.0) / (PI) ;
}

inline int setBit(int N, int pos) {
    return N = N | (1 << pos);
}

inline int resetBit(int N, int pos) {
    return N = N & ~(1 << pos);
}

inline bool checkBit(int N, int pos) {
    return (bool)(N & (1 << pos));
}

struct data {
    int a, b, c, d, e;
    data() {}
    data(int _, int __, int ___, int ____, int _____) {
        a = _, b = __, c = ___, d = ____, e = _____;
    }
    bool friend operator < (data x, data y) {
        return x.e < y.e;
    }
};

const long long INF = (LL) 1e18 + 7;
const int N = 1e6 + 5, M = 1e9 + 7, B = 347, NIL = -1;

//___________________\m/___________________\\

double h, m, s;
double t1, t2;
int f1, f2;

int main() {
    cin >> h >> m >> s;
    cin >> t1 >> t2;
    h = h * 30 + m / 2 + s / 120;
    while (h >= 360) h -= 360;
    m = m * 6 + s / 10;
    while (m >= 360) m -= 360;
    s = s * 6;
    while (s >= 360) s -= 360;
    t1 = t1 * 30;
    while (t1 >= 360) t1 -= 360;
    t2 = t2 * 30;
    while (t2 >= 360) t2 -= 360;
    if (t1 > t2) swap(t1, t2);
//    BUG3(h, m, s);
//    BUG2(t1, t2);
    if (h > t1 && h < t2) f1 = 1;
    if (m > t1 && m < t2) f1 = 1;
    if (s > t1 && s < t2) f1 = 1;
    if (h < t1 || h > t2) f2 = 1;
    if (m < t1 || m > t2) f2 = 1;
    if (s < t1 || s > t2) f2 = 1;
    if (f1 && f2) puts("NO");
    else puts("YES");
//    main();
    return 0;
}
