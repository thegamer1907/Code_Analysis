#include <cstdio>

int main (){
    bool check[1002] = {};
    int n, m, a, b, index;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++){
        scanf("%d %d", &a, &b);
        check[a] = true;
        check[b] = true;
    }
    index = 1;
    while (check[index])
        index++;
    printf("%d\n", n - 1);
    for (int i = 1; i <= n; i++)
        if (i != index)
            printf("%d %d\n", i, index);
    return 0;
}