#include <bits/stdc++.h>
using namespace std;
char s[200005], t[200005];
int p[200005];
int main() {
    scanf("%s%s", s, t);
    int n = strlen(s), m = strlen(t);
    if(n == m) {
        printf("0\n");
        return 0;
    }
    for(int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        p[a - 1] = i;
    }
    int l = 0, r = n;
    while(r > l + 1) {
        int mid = (l + r) / 2;
        int j = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == t[j] && p[i] >= mid)
                j++;
        }
        if(j == m)
            l = mid;
        else
            r = mid;
    }
    printf("%d\n", l);
    return 0;
}
