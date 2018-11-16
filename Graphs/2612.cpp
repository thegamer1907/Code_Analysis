#include <cstdio>

int whos(int *dsu, int v) {
    return (dsu[v] == v ? v : (dsu[v] = whos(dsu, dsu[v])));
}

int main() {
    int n;
    scanf("%d", &n);
    int *mas = new int[n], *dsu = new int[n], ans = 0;
    for (int i = 0; i < n; ++i) {
        dsu[i] = i;
        scanf("%d", &mas[i]);
        --mas[i];
    }
    for (int i = 0; i < n; ++i) {
        int x = whos(dsu, i);
        int y = whos(dsu, mas[i]);
        dsu[x] = y;
    }
    for (int i = 0; i < n; ++i) {
        if (dsu[i] == i) {
            ++ans;
        }
    }
    printf("%d\n", ans);
    return 0;
}
