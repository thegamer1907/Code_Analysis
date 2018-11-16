#include <bits/stdc++.h>
using namespace std;

const int N = 1000 + 1;

int n;
bool forbidden[N];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int m;
    cin >> n >> m;
    while (m--) {
        int u, v;
        cin >> u >> v;
        forbidden[u] = true;
        forbidden[v] = true;
    }

    int u;
    for (u = 1; u <= n; ++u) {
        if (!forbidden[u]) {
            break;
        }
    }
    cout << n - 1 << '\n';
    for (int v = 1; v <= n; ++v) {
        if (v == u) {
            continue;
        }
        cout << v << ' ' << u << '\n';
    }

    return 0;
}
