#include "bits/stdc++.h"
using namespace std;
const int maxn = 120;
char s[maxn][3];
int main(int argc, char const *argv[])
{
    scanf("%s", s[0]);
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n ;i++) {
        scanf("%s", s[i]);
    }
    bool flag = false;
    for (int i = 1; i <= n; i++) {
        if (strcmp(s[0], s[i]) == 0) flag = true;
        for (int j = 1; j <= n; j++) {
            if (flag) break;
            if (s[0][0] == s[i][1] && s[0][1] == s[j][0]) flag = true;
        }
        if (flag) break;
    }
    printf("%s\n", flag?"YES": "NO");
    return 0;
}