#include <bits/stdc++.h>
using namespace std;
#define f0(i, a, b) for (int i = a; i < b; i ++)
#define N 1000006
char s[N];
int n, z[N], mx[N];

int main() {
    scanf("%s", s);
    int st = 0, en = -1, ans;
    int len = strlen(s);
    z[0] = len;
    f0(i, 1, len) {
        z[i] = i > en ? 0 : min(z[i-st], en - i + 1);
        while (i + z[i] < len && s[i+z[i]] == s[z[i]]) z[i] ++;
        if (i + z[i] - 1 > en) st = i, en = i + z[i] - 1;
    }
    f0(i, 1, len) mx[i] = max(mx[i-1], z[i]);
    for (ans = len - 1; ans; ans --) if (z[len-ans] == ans && mx[len-ans-1] >= ans) break;
    if (!ans) puts("Just a legend");
    else printf("%s", s + len-ans);
	return 0;
}
