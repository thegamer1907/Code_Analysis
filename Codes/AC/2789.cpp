#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#ifdef JLOCAL
#include "stress.h"
#endif
using namespace std;

#define rep(i, z, n) for (int i = (z); i < int(n); ++i)
#define repr(i, n, z) for (int i = int(n) - 1; i >= (z); --i)
#define shl(n) (1 << (n))
#define hbit(n, i) (((n) >> (i)) & 1)

using lint = long long;
template <typename A, typename B> auto min(A a, B b) { return a < b ? a : b; };
template <typename A, typename B> auto max(A a, B b) { return a < b ? b : a; };
template <typename K, typename V = __gnu_pbds::null_type>
using tree = __gnu_pbds::tree<K, V, less<K>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update>;

#define STRESS 0

int to[2000022][26];
int len[2000022];
int link[2000022];
bitset<2000022> fin;
//int len[2000022];
int sz = 1;
int cur = 0;

void add_letter(int c) {
    int p = cur;
    cur = sz++;
    len[cur] = len[p] + 1;
    for (; to[p][c] == 0; p = link[p]) {
        to[p][c] = cur;
    }
    if (to[p][c] == cur) {
        link[cur] = 0;
        return;
    }
    int q = to[p][c];
    if (len[q] == len[p] + 1) {
        link[cur] = q;
        return;
    }
    int t = sz++;
    link[cur] = link[t] = link[q];
    len[t] = len[p] + 1;
    memmove(to[t], to[q], 26 * sizeof(int));
    for (; to[p][c] == q; p = link[p]) {
        to[p][c] = t;
    }
}

void calc(int v) {
    if (len[v] != -1) {
        return;
    }
    len[v] = 0;
    if (fin[v]) {
        len[v] = 1;
    }
    rep(i, 0, 26) {
        if (to[v][i]) {
            calc(to[v][i]);
            len[v] += len[to[v][i]];
        }
    }
}

void solve(istream& cin, ostream& cout) {
    string s;
    cin >> s;
    for (char c : s) {
        add_letter(c - 'a');
    }
    assert(sz <= 2 * s.size() + 1);
    for (int i = cur; i; i = link[i]) {
        fin[i] = true;
    }
    memset(len, -1, sizeof(len));
    calc(0);

    int ans = -1;
    int cur = 0;
    rep(i, 0, s.size()) {
        cur = to[cur][s[i] - 'a'];
        assert(cur != 0);
        if (fin[cur] && len[cur] >= 3) {
            ans = i;
        }
    }
    if (ans == -1) {
        cout << "Just a legend";
        return;
    }
    rep(i, 0, ans + 1) {
        cout << s[i];
    }
}

int main() {
#if !defined(JLOCAL) || !STRESS
#ifdef JLOCAL
    freopen("input.txt", "r", stdin);
#endif
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    solve(cin, cout);
#else
    srand();
    for (int ti = 0; ti < 100; ti++) {
        stress::gen();
        stress::stupid();
        ifstream in("input.txt");
        ofstream out("output.txt");
        solve(in, out);
        out.flush();
        stress::check();
    }
    cout << "ok" << endl;
#endif
    return 0;
}