#include <bits/stdc++.h>
#define N 105
#define mod 1000000007
#define oo 2000000000
#define noo -2000000000
using namespace std;
int n;
char ch[N], tmp[N], a[N][N];

int main() {
    scanf("%s", ch);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", a[i]);
    }
    bool can = false;
    for (int i = 0; i < n; i++) {
        if (a[i][0] == ch[0] && a[i][1] == ch[1]) {
            can = 1;
            break;
        }
        if (a[i][1] == ch[0])
            for (int j = 0; j < n; j++) {
                if (a[j][0] == ch[1]) {
                    can = 1;
                    break;
                }
            }
        if (can)
            break;
    }
    printf(can ? "YES\n" : "NO\n");
    return 0;
}
