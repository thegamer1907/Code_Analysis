#include <bits/stdc++.h>

using namespace std;

#define ss second
#define ff first
#define p_b push_back
#define endl "\n"


typedef long long ll;
typedef long double ld;

const ll INF = 2e18;
const ll INFINT = 2e9;
const int N = 1000006;
const int NN = 1006;
const int MOD = 1000000007;

void DIE(string s) {
    cout << s << endl;
    exit(0);
}

void DIE(vector < int > &v) {
    for (int i = 0; i < int(v.size()); i++) cout << v[i] << ' '; cout << endl;
    exit (0);
}

void DIE(vector < ll > &v) {
    for (int i = 0; i < int(v.size()); i++) cout << v[i] << ' '; cout << endl;
    exit (0);
}

void DIE(int a[], int n) {
    for (int i = 0; i < n; i++) cout << a[i] << ' '; cout << endl;
    exit (0);
}

void DIE(string a[], int n) {
    for (int i = 0; i < n; i++) cout << a[i] << ' '; cout << endl;
    exit (0);
}

void DIE(ll x) {
    cout << x << endl;
    exit (0);
}

void DIE(int x) {
    cout << x << endl;
    exit(0);
}

void YES() {
    DIE("YES");
}

void Yes() {
    DIE("Yes");
}

void NO() {
    DIE("NO");
}

void No() {
    DIE("No");
}
/////////////////
// Write below //
/////////////////

ll h, m, s, t1, t2;

bool check (ld x1, ld x2) {
    if (h >= x1 && h <= x2) return 1;
    if (m >= x1 && m <= x2) return 1;
    if (s >= x1 && s <= x2) return 1;
    return 0;
}

int main () {
    ios_base::sync_with_stdio(0);
#ifdef LOCAL
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
#else
    #define cerr if(0)cerr
    //freopen ("input.txt", "r", stdin);freopen ("output.txt", "w", stdout);
    //freopen ("quadro.in", "r", stdin);freopen ("quadro.out", "w", stdout);
#endif // LOCAL
    cin >> h >> m >> s >> t1 >> t2;
    h = 360 / 12 * h;
    m = 360 / 60 * m;
    s = 360 / 60 * s;
    t1 = 360 / 12 * t1;
    t2 = 360 / 12 * t2;
    h %= 360;
    m %= 360;
    s %= 360;
    t1 %= 360;
    t2 %= 360;
    if (s) {
        m++;
        h++;
    }
    else if (m) h++;
    cerr << setprecision(4) << h << ' ' << m << ' ' << s << ' ' << t1 << ' ' << t2 << endl;
    if (t1 > t2) swap(t1, t2);
    cerr << check(t1, t2) << ' '<< check(0, t1) << ' ' << check(t2, 359) << endl;
    if (!check(t1, t2)) YES();
    if (!check(0, t1) && !check(t2, 359)) YES();
    NO();
}

/////////////////
// Write above //
/////////////////
