
#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

void Print()
{
    cout << endl;
}

template<typename T1, typename ... T>
void Print(const T1 &t1, const T& ... t)
{
    cout << t1 << " ";
    Print(t...);
}

template<typename T1, typename T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p)
{
    os << "(" <<p.first << ", " << p.second << ")";
    return os;
}

#define MP(a, b) (make_pair((a), (b)))
#define MT(args...) (make_tuple(args))


LL gcd(LL a, LL b) {
    if (b) {
        LL r = a % b;
        a = b, b = r;
    }
    return a;
}

tuple<LL, LL, LL> extend_gcd(LL a, LL b) {
    if (b == 0) 
        return make_tuple(a, 1, 0);
    else {
        LL g, nx, ny; 
        std::tie(g, nx, ny) = extend_gcd(b, a % b);
        return make_tuple(g, ny, nx - (a / b) * ny);
    }
}

LL fastpow(LL a, LL e, LL mod) {
    if (e == 0) return 1;
    if (e == 1) return a % mod;
    LL t = fastpow(a, e / 2, mod);
    t = t * t % mod;
    if (e & 1)
        return t * a % mod;
    else
        return t % mod;
}

const double PI = 3.14159265358979323846;
const int MOD = (int)1e9 + 7;

int cb, cs, cc, nb, ns, nc, pb, ps, pc;
LL r;

int main() {
    string s; cin >> s;
    for (char ch : s) 
        if (ch == 'B') cb++;
        else if (ch == 'S') cs++;
        else cc++;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    LL le = 0, ri = r + 10000;
    while (le <= ri) {
        auto mid = le + (ri - le) / 2;
        auto tot = 0ll + max(0ll, mid * cb - nb) * pb + max(0ll, mid * cs - ns) * ps + max(0ll, mid * cc - nc) * pc;
        if (tot <= r) {
            le = mid + 1;
        }else
            ri = mid - 1;
    }
    cout << ri << endl;
}                                                                   