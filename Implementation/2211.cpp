#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, w, k, res, a, s;
    scanf("%d %d %d", &k, &n, &w);
    a = k + (w - 1)*k;
    s = ((k + a) * w) / 2;
    res = s - n;
    if (res < 0) res = 0;
    printf("%d\n", res);
    return 0;
}
