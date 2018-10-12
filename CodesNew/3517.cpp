#include <stdio.h>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
    int n, m, rmin, rmax, bmax = 0, s = 0;
    int a[100];
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        bmax = max(bmax, a[i]);
        s += a[i];
    }
    rmax = bmax + m;
    if ((s + m) <= bmax * n) {
        rmin = bmax;
    } else {
        rmin = (s + m + n - 1) / n;
    }
    printf("%d %d", rmin, rmax);
    return 0;
}
