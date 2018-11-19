#include <bits/stdc++.h>
using namespace std;
bool vis[43300];
int main() {
    int h, m, s, t1, t2;
    scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
    if (h == 12) h = 0;
    if (t1 == 12) t1 = 0;
    if (t2 == 12) t2 = 0;
    vis[h * 3600 + m * 60 + s] = true;
    //printf("OK1\n");
    vis[m * 720 + s * 12] = true;
    //printf("OK1\n");
    vis[s * 720] = true;
    //printf("OK1\n");
    for (int i = t1 * 3600; !vis[i]; i = (i + 1) % 43200) {
        //printf("i = %d\n", i);
        if (i == t2 * 3600) {
            printf("YES\n");
            return 0;
        }
    }
    for (int i = t1 * 3600; !vis[i]; i = (i + 43199) % 43200) {
        if (i == t2 * 3600) {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
