#include <bits/stdc++.h>

using namespace std;

int n;
vector<int> par;

void dsu_init() {
    par.assign(n, -1);
}

int root(int v) {
    return par[v] < 0 ? v : (par[v] = root(par[v]));
}

void merge(int x, int y) {
    if ((x = root(x)) == (y = root(y))) return;
    if (par[y] < par[x]) swap(x, y);
    par[x] += par[y];
    par[y] = x;
}

int main() {
    cin >> n;
    dsu_init();
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        merge(p-1, i);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) if (par[i] < 0) ans += 1;
    cout << ans << endl;
}
