#include <bits/stdc++.h>

#define pii pair<int, int>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define ll long long
#define ld long double
#define sz(v) int(v.size())
#define all(v) v.begin(), v.end()
#define vec vector<int>

#define left not_right
#define y1 what

using namespace std;

const int N = (int) 4e4 + 10;
const int M = (int) 2e6 + 7;
const ll LINF = (ll) 1e18;
const int INF = (int) 1e6;
const double EPS = (double) 1e-9;

int n, k;
int cnt[(1 << 4)];
int cur[(1 << 4)];

void gg(bool x) {
    cout << (x ? "YES" : "NO");
    exit(0);
}

int main() {
    #define fn "balls"
    #ifdef witch
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #else
//        freopen(fn".in", "r", stdin);
//        freopen(fn".out", "w", stdout);
    #endif  
    srand(time(0));
    cin >> n >> k;
    vec v;
    for (int ptr = 1; ptr <= n; ptr++) {
        int mask = 0;
        for (int i = 0, x; i < k; i++) {
            cin >> x;
            mask |= x * (1 << i);
        }
        v.pb(mask);
    }
    sort(all(v));
    v.resize(unique(all(v)) - v.begin());
    for (int i = 1; i < (1 << sz(v)); i++) {
        memset(cur, 0, sizeof(cur));
        int bts = 0;
        for (int j = 0; j < sz(v); j++) {
            if ((i >> j) % 2) {
                for (int ptr = 0; ptr < k; ptr++) {
                    if ((v[j] >> ptr) % 2) {
                        cur[ptr]++;
                    }
                }
                bts++;
            }
        }
        bool f = 0;
        for (int ptr = 0; ptr < k; ptr++) {
            if (cur[ptr] > bts / 2) {
                f = 1;
                break;
            }
        }
        if (!f) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}