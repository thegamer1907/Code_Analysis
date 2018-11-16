                                    
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

int n, m;
vector<int> ids;
int a[105], b[105];

bool check() {
    bool bad = false;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i + 1]) {bad = true; break;}
    }
    return bad;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            ids.push_back(i);
        }
    }
    for (int i = 1; i <= m; i++) {
        cin >> b[i];
    }
    if (m >= 3)
        cout << "Yes" << endl;
    else if (m == 1) {
        a[ids[0]] = b[1];
        if (check())
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }else {
        a[ids[0]] = b[1];
        a[ids[1]] = b[2];
        if (check())
            cout << "Yes" << endl;
        else{
            a[ids[0]] = b[2];
            a[ids[1]] = b[1];
            if (check()) 
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }

}                                                                   