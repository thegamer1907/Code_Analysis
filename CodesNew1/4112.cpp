#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int n, q;
LL a[200005], sum;
int main()
{
    int i;
    LL k;
    scanf("%d %d", &n, &q);
    for (i=1; i<=n; i++) {
        scanf("%lld", a+i);
        a[i]+=a[i-1];
    }
    for (i=1; i<=q; i++) {
        scanf("%lld", &k);
        sum+=k;
        int pl = upper_bound(a+1, a+n+1, sum)-a;
        if (pl>n) {
            sum = 0;
            printf("%d\n", n);
        }
        else printf("%d\n", n-pl+1);
    }
    return 0;
}
