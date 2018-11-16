#include <bits/stdc++.h>
using namespace std;
int pa[10005];
inline void init(int n) {
    for (int i = 1; i <= n; i++) pa[i] = i;
}
int find(int x) {
    if (x == pa[x]) return x;
    return pa[x] = find(pa[x]);
}
void merge(int u, int v) {
    int fu = find(u);
    int fv = find(v);
    if (fu != fv) pa[fu] = fv;
}
int main() {
    int n;
    scanf("%d", &n);
    init(n);
    for (int i = 1; i <= n; i++) {
        int p;
        scanf("%d", &p);
        merge(i, p);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (i == pa[i]) cnt++;
    }
    printf("%d\n", cnt);
    return 0;
}
