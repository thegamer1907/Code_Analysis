#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

#define size(s) (int)(s).size()

const int MAXN = 1e6 + 1;
const int INF = 1e9 + 1;
const int BITS = 64;
const ld EPS = 1e-9;
const int L = 18;

void bye() {
    cout << '\n';
    exit(0);
}

int main() {
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    vector<int> g(n);
    for (int i = 0; i < n; i++) {
        g[i] = i + 1;
    }
    int ans = 0;
    bool isF = 0;
    vector<int> g1;
    int cnt = 1;
    while (n > 1) {
        g1.clear();
        bool f = 0;
        for (int i = 0; i < n; i += 2) {
            if (g[i] == a && g[i + 1] == b) {
                if (size(g) == 2) {
                    isF = 1;
                }
                ans = cnt;
                f = 1;
                break;
            }
            if (g[i] == b && g[i + 1] == a) {
                ans = cnt;
                f = 1;
                if (size(g) == 2) {
                    isF = 1;
                }
                break;
            }
            if (g[i] == a || g[i] == b) {
                g1.push_back(g[i]);
                continue;
            }
            if (g[i + 1] == a || g[i + 1] == b) {
                g1.push_back(g[i + 1]);
                continue;
            }
            g1.push_back(g[i]);
        }
        cnt++;
        n /= 2;
        g = g1;
        if (f) {
            break;
        }
    }
    if (isF) {
        cout << "Final!";
    } else {
        cout << ans;
    }
    bye();
}
