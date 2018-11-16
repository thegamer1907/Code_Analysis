#include<bits/stdc++.h>
#define LL long long
using namespace std;

int vis[100100];

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 1; i <= m; ++i) {
        int a, b;
        scanf("%d %d", &a, &b);
        vis[a] = 1; vis[b] = 1;
    }
    int p = 0;
    for(int i = 1; i <= n; ++i)
        if(vis[i] == 0) p = i;
    printf("%d\n", n - 1);
    for(int i = 1; i <= n; ++i) {
        if(i == p) continue;
        printf("%d %d\n", i, p);
    }
    return 0;
}
