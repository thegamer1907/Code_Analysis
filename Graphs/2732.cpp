#include <bits/stdc++.h>
using namespace std;

ifstream in("test.in");
ofstream out("test.out");

const int DIM = 100005;

int cst[DIM]; bool oki[DIM];
vector<int> edg[DIM];

void dfs(int x, int &mnm) {
    oki[x] = true; mnm = min(mnm, cst[x]);
    for (int y : edg[x]) {
        if (!oki[y]) { dfs(y, mnm); } } }

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> cst[i]; }
    for (int i = 1; i <= m; ++i) {
        int x, y; cin >> x >> y;
        edg[x].push_back(y); edg[y].push_back(x); }
    long long ans = 0;
    for (int i = 1; i <= n; ++i) if (!oki[i]) {
        int mnm = 1e9 + 5; dfs(i, mnm); ans += mnm; }
    cout << ans;
    return 0; }
