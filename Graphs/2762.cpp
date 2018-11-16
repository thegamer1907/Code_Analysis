#include<iostream>
#include<algorithm>
#include<cstring>
#include<string>
#include<cmath>
#include<queue>
#include<stack>
#include <iomanip>
#include<vector>
#include<set>
using namespace std;
typedef long long ll;
int n, m;
int vis[1050];
int main() {
    while (cin >> n >> m) {
        memset(vis, 0, sizeof(vis));
        for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            vis[x] = vis[y] = 1;
        }
        int tot;
        for (int i = 1; i <= n; i++) {
            if (vis[i])
                continue;
            tot = i;
        }
        cout << n - 1 << endl;
        for (int i = 1; i <= n; i++) {
            if (tot != i)
                cout << i << " " << tot << endl;
        }
    }
    return 0;
}