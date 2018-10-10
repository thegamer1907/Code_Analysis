#include <bits/stdc++.h>
using namespace std;
const int N = 11234567;
const int mod = 1e9 + 7;
const int inf = 1e15 + 7;
int read()
{
    int x;
    scanf("%d", &x);
    return x;
}
int a[N];
int d[N];
main()
{
    int n, m, i, j, x, l, r;
    int t = 1e7;
    for(i = 2; i <= t; i ++) {
        if(a[i] == 0) {
            a[i] = i;
            for(j = 2 * i; j <= t; j += i) {
                if(a[j] == 0) a[j] = i;
            }
        }
    }
    cin >> n;
    for(i = 1; i <= n; i ++) {
        x = read();
        while(x > 1) {
            int tt = a[x];
            d[tt] ++;
            while(x % tt == 0)
                x /= tt;
        }
    }
    for(i = 1; i <= t; i ++) {
        d[i] += d[i - 1];
    }
    cin >> m;
    for(i = 1; i <= m; i ++) {
        l = read();
        r = read();
        if(l >= t)
            l = t;
        if(r >= t)
            r = t;
        printf("%d\n", d[r] - d[l - 1]);
    }
}
