#include <bits/stdc++.h>
using namespace std;

const int MAXQ = 100000;

struct query
{
    int i, l, r, a;
} Q[MAXQ];

bool by_i(const query &a, const query &b)
{
    return a.i < b.i;
}

bool by_l(const query &a, const query &b)
{
    if (a.l == b.l) {
        return a.r < b.r;
    }
    return a.l < b.l;
}

int a, b, m, n, q;
set<int> B;
vector<vector<int>> A;
vector<pair<int, int>> S;

int main()
{
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    A.assign(n, vector<int>(m, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> A[i][j];
        }
    }
    for (int j = 0; j < m; ++j) {
        a = 0, b = 1;
        while (b < n) {
            if (A[b - 1][j] > A[b][j]) {
                S.push_back({a, b});
                a = b;
            }
            ++b;
        }
        S.push_back({a, b});
    }
    sort(S.begin(), S.end());
    cin >> q;
    for (int i = 0; i < q; ++i) {
        Q[i].i = i;
        cin >> Q[i].l >> Q[i].r;
        --Q[i].l;
        --Q[i].r;
        Q[i].a = 0;
    }
    sort(Q, Q + q, by_l);
    a = 0;
    for (int i = 0; i < q; ++i) {
        while (a < (int)S.size() && S[a].first <= Q[i].l) {
            B.insert(S[a].second);
            ++a;
        }
        auto x = B.lower_bound(Q[i].r + 1);
        Q[i].a = x != B.end();
    }
    sort(Q, Q + q, by_i);
    for (int i = 0; i < q; ++i) {
        cout << (Q[i].a ? "Yes" : "No") << endl;
    }
    return 0;
}
