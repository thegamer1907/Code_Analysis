#include <bits/stdc++.h>
using namespace std;

#define st first
#define nd second
#define mp make_pair
#define pb push_back
#define cl(x, v) memset((x), (v), sizeof(x))
#define db(x) cerr << #x << " == " << x << endl
#define dbs(x) cerr << x << endl
#define _ << ", " <<
#define gcd(x, y) __gcd((x), (y))

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vii;

const ld EPS = 1e-9, PI = acos(-1.);
const ll LINF = 0x3f3f3f3f3f3f3f3f, LMOD = 1011112131415161719ll;
const int INF = 0x3f3f3f3f, MOD = 1e9+7;
const int N = 1e5+5;

string s, t;
int n, ok, a, b;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> s >> n;
    while (n--) {
        cin >> t;
        if (s == t) ok = 1;
        if (s[0] == t[1]) a = 1;
        if (s[1] == t[0]) b = 1;
        if (a and b) ok = 1;
    }
    printf("%s\n", ok ? "YES" : "NO");
    return 0;
}
