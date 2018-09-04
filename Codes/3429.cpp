#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n, sum, sum2;
int main()
{
    LL l, r, k;
    scanf("%lld", &n);
    l = 1;
    r = n/2+n%2;
    while (l<r) {
        LL m = (l+r)>>1;
        k = n;
        sum = sum2 = 0;
        while (k>0) {
            if (sum>=n/2||sum2>n/2) break;
            if (k<=m) {
                sum+=k;
                k-=m;
            }
            else {
                sum+=m;
                k-=m;
                sum2+=k/10;
                k-=k/10;
            }
        }
        if (sum>=n/2) r = m;
        else l = m+1;
    }
    printf("%lld", l);
    return 0;
}
