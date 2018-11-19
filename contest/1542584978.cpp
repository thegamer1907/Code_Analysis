#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int n, k;
bool vis[20];

int main(void) {
    memset(vis, false, sizeof(vis));
    scanf("%d%d", &n, &k);
    int gg;
    for (int i = 0; i < n; i++) {
        int tmp = 0;
        for (int j = 0; j < k; j++) {
            scanf("%d", &gg);
            tmp = tmp * 2 + gg;
        }
        vis[tmp] = true; 
    }
    bool flag = false;
    if (vis[0]) flag = true;
    else {
        for(int i = 0; i < 16; i++) {
            if(vis[i]) {
                for(int j = 0; j < i; j++) {
                    if(vis[j] && !(i & j)) {
                        flag = true;
                        break;
                    }
                }
            }
            if(flag) break;
        }
    }
    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;
}