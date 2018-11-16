#include <bits/stdc++.h>
using namespace std;
int n, m, k;
void to_next(int &x, int &y) {
    if (x & 1) y++;
    else y--;
    if (y > m) x++, y--;
    if (y < 1) x++, y++;
}
void print(int &x, int &y) {
    printf("%d %d ", x, y);
    to_next(x, y);
}
int main() {
    scanf("%d%d%d", &n, &m, &k);
    int x = 1, y = 1;
    for (int i = 1; i <= k; i++) {
        if (i < k) {
            printf("2 ");
            print(x, y);
            print(x, y);
            puts("");
        } else {
            printf("%d ", n*m-2*(k-1));
            while (x <= n) print(x, y);
            puts("");
        }
    }
    return 0;
}