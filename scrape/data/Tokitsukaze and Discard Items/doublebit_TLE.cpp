#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n,m,k;
    scanf("%I64d%I64d%I64d",&n,&m,&k);

    long long p;
    long long cnt = 0;
    long long cur = 0;
    long long ans = 0;
    for (long long i=0;i<m;i++) {
        scanf("%I64d",&p);
        if (p <= cur) {
            cnt++;
        } else {
            cur += cnt;
            cnt = 1;
            ans++;
            while (p > cur) {
                cur += k;
            }
        }
    }

    printf("%I64d\n",ans);

    return 0;
}