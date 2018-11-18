#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 300;
char s[5];
char ss[maxn][5];
int vis[maxn][5];
bool mask[maxn];
int n;
int main() {
    while (~scanf("%s", s)) {
        scanf("%d", &n);
        n *= 2;
        for (int i = 0; i < n; i += 2) {
            scanf("%s", ss[i]);
            strcpy(ss[i + 1], ss[i]);
        }
        bool flag = false;
        memset(vis, -1, sizeof(vis));
        memset(mask, false, sizeof(mask));
        for (int i = 0; i < n; i++) {
            if (ss[i][0] == s[0])
                vis[i][0] = 0;
            if (ss[i][0] == s[1])
                vis[i][0] = 1;
            if (ss[i][0] == s[0] && ss[i][0] == s[1])
                vis[i][0] = 2;
            if (ss[i][1] == s[0])
                vis[i][1] = 0;
            if (ss[i][1] == s[1])
                vis[i][1] = 1;
            if (ss[i][1] == s[0] && ss[i][1] == s[1])
                vis[i][1] = 2;
            //printf("i-->%d  %d %d\n", i, vis[i][0], vis[i][1]);
        }
        for (int i = 0; i < n; i++) {
            if (flag)
                break;
            if ((vis[i][0] == 0 && vis[i][1] == 1) || (vis[i][0] == 2 && vis[i][1] == 2))
                flag = true;
            if (vis[i][0] == 1) {
                mask[i] = true;
                for (int j = 0; j < n; j++) {
                    if (mask[j])
                        continue;
                    if (vis[j][1] == 0|| vis[j][1] == 2) {
                        flag = true;
                        break;
                    }
                }
            }
            if (vis[i][1] == 0) {
                mask[i] = true;
                for (int j = 0; j < n; j++) {
                    if (mask[j])
                        continue;
                    if (vis[j][0] == 1|| vis[j][0] == 2) {
                        flag = true;
                        break;
                    }
                }
            }
            if (vis[i][0] == 2) {
                mask[i] = true;
                for (int j = 0; j < n; j++) {
                    if (mask[j])
                        continue;
                    if (vis[j][1] == 0 || vis[j][1] == 1|| vis[j][1] == 2) {
                        flag = true;
                        break;
                    }
                }
            }
        }
        if (flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}