#include <cstdio>

char c[3], a[3];
int n;
bool p1, p2, ans;

int main() {
    scanf("%s%d", c, &n);
    for (int i = 1; i <= n; i++) {
        scanf("%s", a);
        if (a[1] == c[0])
            p1 = true;
        if (a[0] == c[1])
            p2 = true;
        if (a[0] == c[0] && a[1] == c[1])
            ans = true;
    }
    if (ans || (p1 && p2))
        puts("YES");
    else
        puts("NO");
    return 0;
}

