#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <algorithm>
#include <functional>
#include <iomanip>
using namespace std;

#define LL long long
const int maxn = 10000 + 100;
int n, tmp;
int color[maxn];
vector<int> G[maxn];

int dfs(int x) {
    int ret = 0;
    int len = G[x].size();
    for(int i = 0; i < len; ++i) {
        int pos = G[x][i];
        ret += dfs(pos);
        ret += (color[pos] != color[x]);
    }
    return ret;
}

int main() {
    #ifdef LOCAL
    freopen("test.txt", "r", stdin);
//    freopen("out.txt", "w", stdout);
    #endif // LOCAL
    ios::sync_with_stdio(false);

    while(scanf("%d", &n) != EOF) {
        for(int i = 1; i <= n; ++i) {
            G[i].clear();
        }
        for(int i = 2; i <= n; ++i) {
            scanf("%d", &tmp);
            G[tmp].push_back(i);
        }
        for(int i = 1; i <= n; ++i) {
            scanf("%d", &color[i]);
        }
        printf("%d\n", dfs(1) + 1);
    }

    return 0;
}
