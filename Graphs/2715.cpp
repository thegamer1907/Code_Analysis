#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define pii pair<int, int>
#define fr(n) for (int i = 0; i < n; i++)
#define fr1(n) for (int i = 1; i <= n; i++)
using namespace std;

#define pli pair<ll, int>

vector<pii> g[100005];
ll d[100005];
bool b[100005];
priority_queue<pli, vector<pli>, greater<pli>> q;

int main() {
    ios::sync_with_stdio(false);
    int n, m, u, v, w;
    cin >> n >> m;
    fr(m) cin >> u >> v >> w, g[u].push_back({v, w}), g[v].push_back({u, w});
    fr1(n) d[i] = (ll)mod * mod;
    d[1] = 0;
    q.push({0, 1});
    while (!q.empty()) {
        int p = q.top().second;
        q.pop();
        if (b[p]) continue; b[p] = 1;
        for (pii i : g[p]) {
            if (d[i.first] > d[p] + i.second) {
                d[i.first] = d[p] + i.second;
                q.push({d[i.first], i.first});
            }
        }
    }
    if (d[n] == (ll)mod * mod) cout << -1;
    else {
        vector<int> z = {n};
        while (z.back() != 1) {
            for (pii i : g[z.back()]) if (d[i.first] + i.second == d[z.back()]) {
                z.push_back(i.first);
                break;
            }
        }
        reverse(z.begin(), z.end());
        for (int i : z) cout << i << ' ';
    }
}
