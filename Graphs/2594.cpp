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
const int N = 1e4+5;

int x, n, ans = 1, col[N];
vi adj[N];

void go (int v, int c) {
    if (col[v] != c) ans++, c = col[v];
    for (auto k : adj[v]) go(k, c);
}

int main () {
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        scanf("%d", &x);
        adj[x].pb(i);
    }
    for (int i = 1; i <= n; i++) scanf("%d", &col[i]);
    go(1, col[1]);
    printf("%d\n", ans);
    return 0;
}
