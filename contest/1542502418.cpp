#include <bits/stdc++.h>
using ll = int64_t;
using ld = long double;
using ull = unsigned long long;
using namespace std;

const int MAXN = 1001;
string s[MAXN];
string fs[MAXN], ls[MAXN];
int a[MAXN], b[MAXN];

ull h(const string& s, int l, int r) {
    int v = 0;
    for (int i = l; i < r; i++) {
        v = (v * 2 + s[i] - '0');
    }

    return v;
}

const int MAXANS = 1000001;
int cid = 0;
int ans[MAXN];
int last[MAXN];
int n, k;

void work(const string& s) {
    for (int i = 0; i + k <= s.length(); i++) {
        ans[h(s, i, i + k)] = cid;
    }
}

void dfs(int v) {
    if (last[v] == cid) return;
    last[v] = cid;
    if (v < n) {
        work(s[v]);
        int sz = min(k - 1, int(s[v].length()));
        fs[v] = s[v].substr(0, sz);
        ls[v] = s[v].substr(s[v].length() - sz);
    } else {
        dfs(a[v]);
        dfs(b[v]);
        string conc = ls[a[v]] + fs[b[v]];
        work(conc);
        if (fs[a[v]].length() + 1 < k) {
            fs[v] = fs[a[v]] + fs[b[v]].substr(0, min(fs[b[v]].length(), k - 1 - fs[a[v]].length()));
        } else {
            fs[v] = fs[a[v]];
        }

        if (ls[b[v]].length() + 1 < k) {
            ls[v] = ls[a[v]].substr(ls[a[v]].length() - min(ls[a[v]].length(), k - 1 - ls[b[v]].length())) + ls[b[v]];
        } else {
            ls[v] = ls[b[v]];
        }
    }
}

bool tr(int n, int k) {
    ++cid;
    ::k = k;
    dfs(n);
    for (int i = 0; i < (1 << k); ++i) {
        if (ans[i] != cid) return false;
    }

    return true;
}

int main() {
#ifdef PAUNSVOKNO
    freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false); cout.setf(ios::fixed); cout.precision(20);
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int m;
    cin >> m;
    for (int i = n; i < n + m; i++) {
        cin >> a[i] >> b[i];
        a[i]--, b[i]--;
        int ck = 1;
        while (tr(i, ck)) ck++;
        cout << ck - 1 << "\n";
    }   
}