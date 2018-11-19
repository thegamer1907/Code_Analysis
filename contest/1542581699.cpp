#include <bits/stdc++.h>

using namespace std;
bool vis[100];
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0, x; j < m; j++) {
            scanf("%d", &x);
            if(x) sum |= 1 << j;
        }
        vis[sum] = true;
    }
    bool flag = false;
    for(int i = 0; i < (1<<m); i++) {
        for(int j = 0; j < (1 << m); j++) {
            if(vis[i] && vis[j] && ((i ^ j) == i + j)) flag = true;
         }
    }
    if(flag) printf("YES\n");
    else printf("NO\n");
    return 0;

}

