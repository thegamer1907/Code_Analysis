#include <bits/stdc++.h>
#include <ostream>
using namespace std;
template <typename T> void printRange(T &x) { for (auto y : x) cout << y << ' '; cout << endl; }
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<ll> vl;
#define getNum(i) scanf("%d", &(i))
#define MOD 1000000007
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define TRACE(x) cout << #x << " = " << x << endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define mp make_pair
#define reset(a) memset((a), 0, sizeof((a)))

int n, k;
vi subset;
map<int, int> q;
bool ans;

bool validSubset() {
    int sz = subset.size();
    int cnt = 0;
    for (int i = 4; ~i; i--) {
        int cnt = 0;
        for (auto x : subset) {
            cnt += (x>>i)&1;
        }
        if (cnt > sz/2) return false;
    }
    return true;
}

void check() {
    map<int, int> cnt;
    for (int i = 0; i < subset.size(); i++) {
        cnt[subset[i]]++;
    }

    for (auto P : cnt) {
        if (P.second > q[P.first]) return;
    }
    ans = true;
}

void gen(int i, int sz) {
    if (i == sz) {
        if (validSubset()) {
            check();
        }
        return;
    }
    REP(j, 1<<k) {
        subset[i] = j;
        gen(i+1, sz);
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
#endif
    IOS
    cin >> n >> k;
    REP(i, n) {
        int x = 0;
        REP(i, k) {
            int tmp;
            cin >> tmp;
            x <<= 1;
            x |= tmp;
        }
        q[x]++;
    }

    FOR(i, 1, 5) {
        subset.resize(i);
        gen(0, i);
    }
    if (ans) {
        puts("YES");
    } else {
        puts("NO");
    }
    return 0;
}