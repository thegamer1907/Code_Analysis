#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    vvi MAP(n+1, vi(m+1, 1));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            char c;
            cin >> c;
            if (c == '#') MAP[i][j] = 1;
            else MAP[i][j] = 0;
        }
    }
    vvi PRE(n+1, vi(m+1)), VER(n+1, vi(m+1)), HOR(n+1, vi(m+1));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            PRE[i][j] = PRE[i-1][j] + PRE[i][j-1] - PRE[i-1][j-1];
            if (MAP[i][j] == 0) {
                PRE[i][j] += MAP[i-1][j] == 0;
                PRE[i][j] += MAP[i][j-1] == 0;
            }
            HOR[i][j] = HOR[i][j-1] + (MAP[i][j] == 0 && MAP[i-1][j] == 0);
        }
    }
    for (int j = 1; j <= m; ++j) {
        for (int i = 1; i <= n; ++i) {
            VER[i][j] = VER[i-1][j] + (MAP[i][j] == 0 && MAP[i][j-1] == 0);
        }
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int ans = PRE[x2][y2] + PRE[x1-1][y1-1] - PRE[x2][y1-1] - PRE[x1-1][y2];
        ans -= HOR[x1][y2] - HOR[x1][y1-1];
        ans -= VER[x2][y1] - VER[x1-1][y1];
        cout << ans << "\n";
    }
    return 0;
}