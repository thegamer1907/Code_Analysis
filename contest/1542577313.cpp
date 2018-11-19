#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <cassert>
#include <cmath>
#define PB push_back
#define MP make_pair
#define sz(v) (ll((v).size()))
#define forn(i,n) for(ll i = 0; i < (n); ++i)
#define forv(i,v) forn(i,sz(v))
#define fors(i,s) for(auto i=(s).begin();i!=(s).end();++i)
#define all(v) (v).begin(), (v).end()

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<vi> vvi;

vector<bool> sat(1 << 15);

int stob(string& t) {
    int s = 0;
    for (auto ch : t) {
        s = s * 2 + (ch - '0');
    }
    return s;
}

const int N = 100;
set<int> cont[201];
set<string> junc[201];
string v[201], f[201], e[201];

void update(vector<bool>& sat, string& s, int k) {
    int run = -1;
    for (int i = 0; i < sz(s) - k + 1; i++) {
        if (run < 0) {
            run = 0;
            for (int j = 0; j < k; j++) {
                run = run * 2 + (s[j] - '0');
            }
        } else {
            run = (run & ((1 << (k - 1)) - 1)) << 1;
            run |= s[i + k - 1] - '0';
        }
        sat[run] = true;
    }
}

int solve(int idx) {
    for (int k = 1; k < 20; k++) {
        vector<bool> sat(1 << k);
        for (auto x : cont[idx]) update(sat, v[x], k);
        for (auto x : junc[idx]) update(sat, x, k);
        bool can = true;
        for (int i = 0; i < (1 << k); i++) {
            if (!sat[i])  {
                can = false; break;
            }
        }
        if (!can) return k - 1;
    }
    return 0;
}


int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    forn(i, n) {
        cin >> v[i];
        f[i] = e[i] = v[i];
        cont[i].insert(i);
    }
    int m; cin >> m;
    forn(i, m) {
        int x, y; cin >> x >> y; x--, y--;
        int idx = i + n;
        // how to combine two stuff
        if (sz(e[y]) < N) {
            if (sz(e[x]) + sz(e[y]) <= N) {
                e[idx] = e[x] + e[y];
            } else {
                int mixin = N - sz(e[y]);
                e[idx] = e[x].substr(sz(e[x]) - mixin, mixin) + e[y];
            }
        } else {
            e[idx] = e[y];
        }
        if (sz(f[x]) < N) {
            if (sz(f[x]) + sz(f[y]) <= N) {
                f[idx] = f[x] + f[y];
            } else {
                int mixin = N - sz(f[x]);
                f[idx] = f[x] + f[y].substr(0, mixin);
            }
        } else {
            f[idx] = f[x];
        }
        for (auto s : cont[x]) cont[n+i].insert(s);
        for (auto s : cont[y]) cont[n+i].insert(s);

        for (auto s : junc[x]) junc[n+i].insert(s);
        for (auto s : junc[y]) junc[n+i].insert(s);
        junc[n + i].insert(e[x] + f[y]);

        cout << solve(n + i) << endl;
    }
}
