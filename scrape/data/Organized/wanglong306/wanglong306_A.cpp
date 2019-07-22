#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;

typedef long long ll;

ll a[100005];

int main() {
    ll n, k;
    ll m;
    scanf("%lld%lld%lld", &n, &m, &k);
    for(ll i = 0; i < m; i++) {
        scanf("%lld", a + i);
    }
    ll i = 0, j = 1;
    ll cnt = 0;
    ll ans = 0;
    while(i < m) {
        //printf("i:%lld j:%lld cnt:%lld\n", i, j, cnt);

        if(a[i] - cnt > j * k) {
            j = (a[i] -cnt) / k;
            if(j * k < a[i] - cnt)
                j++;
        }
        //printf("j = %lld\n", j);
        ll cnt0 = 0;
        while(i < m && a[i] - cnt<= j * k) {
            i++;
            cnt0++;
        }
        //printf("cnt0 = %lld\n", cnt0);
        cnt += cnt0;
        ans++;
    }
    printf("%lld\n", ans);
    return 0;
}