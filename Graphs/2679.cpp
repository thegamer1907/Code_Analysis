#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <map>
#include <cstring>
#include <numeric>
#include <algorithm>
#include <set>

using namespace std;
typedef long long ll;

#define sz int(1e6)
#define F first
#define S second
#define pb push_back

int x, y, n, m, s;
char a[555][555];
bool was[555][555];

void dfs(int x, int y) {
    s--;
    if (s < 0) return;
    was[x][y] = 1;
    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            if (dx * dy == 0 && !was[x + dx][y + dy] && a[x + dx][y + dy] == '.') {
                dfs(x + dx, y + dy);
            }
        }
    }
}
int main() {
    int cnt = 0;
    cin >> n >> m >> s;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
            if (a[i][j] == '.') {
                cnt++;
                x = i;
                y = j;
            }
        }
    }
    s = cnt - s;

    dfs(x, y);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (!was[i][j] && a[i][j] == '.')
                cout << "X";
            else
            if (was[i][j]) cout << ".";
            else cout << "#";
        }
        cout << "\n";
    }

}
