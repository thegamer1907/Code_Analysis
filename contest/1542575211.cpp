/** @xigua */
#include <stdio.h>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <cstring>
#include <queue>
#include <set>
#include <string>
#include <map>
#include <climits>
#include <bitset>
#include <ctime>
#define PI acos(-1)
using namespace std;
typedef long long ll;
typedef double db;
const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int INF = 1e8 + 5;
const ll inf = 1e15 + 5;
const db eps = 1e-8;
const ll hp = 2333;
const ll base = 1e9+13;
int p[maxn][10], xx[maxn];

void solve() {
    int n, k;

    while (cin >> n >> k) {
        int num[10] = {0}, vis[10][10] = {0};
        memset(xx, 0, sizeof(xx));
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= k; j++) {
                scanf("%d", &p[i][j]);
                xx[i] += (p[i][j] == 0);
                num[j] += p[i][j];
            }
            for (int j = 1; j <= k; j++) {
                for (int l = 1; l < j; l++) {
                    if (p[i][l] == 0 && p[i][j] == 0) {
                        vis[l][j] = vis[j][l] = 1;
                    }
                }
            }
        }
        int f = 1;
        for (int i = 1; i <= k; i++) {
            if (num[i] == n) f = 0;
        }
        if (f == 0) {
            cout << "NO\n";
            continue;
        }
        if (n <= 2) cout << "YES\n";
        else {
            f = 0; int maxx = 0;
            for (int i = 1; i <= n; i++) {
                maxx = max(maxx, xx[i]);
            }
            if (maxx >= k - 1) {
                cout << "YES\n";
            }
            else {
                if (maxx == 1) cout << "NO\n";
                else {
                    f = 0;
                    for (int i = 2; i <= k; i++) {
                        if (vis[1][i]) {
                            for (int l = 2; l <= k; l++) {
                                if (l == i) continue;
                                for (int h = l + 1; h <= k; h++) {
                                    if (h == i) continue;
                                    if (vis[l][h]) f = 1;
                                }
                            }
                        }
                    }
                    if (f) cout << "YES\n";
                    else cout << "NO\n";
                }
            }
        }
    }
}

int main() {
    int t = 1, cas = 1;
  //  freopen("in.txt", "r", stdin);
   // freopen("out.txt", "w", stdout);
    //scanf("%d", &t);
   // init();
    while(t--) {
        //printf("Case #%d: ", cas++);
        solve();
    }
    return 0;
}