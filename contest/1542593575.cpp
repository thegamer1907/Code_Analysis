#include <bits/stdc++.h>
using namespace std;
bool a[30], b[30];
int main() {
    char x, y; scanf("\n%c\n%c", &x, &y);
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        char xx, yy; scanf("\n%c\n%c", &xx, &yy);
        if (xx == x && yy == y) {
            puts("YES");
            exit(0);
        }
        a[xx - 'a'] = b[yy - 'a'] = true;
    }
    puts(b[x - 'a'] && a[y - 'a'] ? "YES" : "NO");
    return 0;
}
