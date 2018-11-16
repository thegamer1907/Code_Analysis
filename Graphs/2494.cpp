#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <cfloat>
#include <cstring>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

#define LL long long
const int maxn = 10000 + 100;
int n, ans;
int color[maxn], fa[maxn];

int main() {
    #ifdef Dmaxiya
    freopen("test.txt", "r", stdin);
    #endif // Dmaxiya
    ios::sync_with_stdio(false);

    while(scanf("%d", &n) != EOF) {
        ans = 0;
        for(int i = 2; i <= n; ++i) {
            scanf("%d", &fa[i]);
        }
        for(int i = 1; i <= n; ++i) {
            scanf("%d", &color[i]);
            if(color[i] != color[fa[i]]) {
                ++ans;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}
