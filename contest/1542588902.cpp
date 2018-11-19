// /contest/868/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

const int mod = 1000000007;

inline int add(int a, int b) { if ((a+=b) >= mod) return a-mod; else return a; }
inline int mul(int a, int b) { return LL(a) * b % mod; }
inline int sub(int a, int b) { if ((a-=b) < 0) return a+mod; else return a; }
int power(int a, int b) { int r = 1; while (b) { if (b&1) r = mul(r, a); a = mul(a, a); b >>= 1; } return r; }

const double eps = 1e-8;

inline bool eq(double a, double b) {
    return abs(a-b) < eps;
}

inline bool giua(double a, double b, double c) {
    return a < b && b < c;
}

int main() {
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    if (t1 == 12) t1 = 0;
    if (t2 == 12) t2 = 0;
    if (t1 > t2) swap(t1, t2);
    double ss = s/5.0;
    double mm = m/5.0 + s/3600.0;
    if (h == 12) h = 0;
    double hh = h + (m*60+s)/(60*60.0);
    if (eq(hh,t1) || eq(hh,t2) || eq(ss,t1) || eq(ss,t2) || eq(mm,t1) || eq(mm,t2)) {
        cout << "NO"; return 0;
    }
    int dem = giua(t1,hh,t2) + giua(t1,mm,t2) + giua(t1,ss,t2);
    if (dem == 0 || dem == 3) cout << "YES";
    else cout << "NO";
}