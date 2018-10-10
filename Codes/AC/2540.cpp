#include "bits/stdc++.h"
using namespace std;

#define f first
#define s second
#define pb push_back
#define all(c) c.begin(),c.end()

#define gi(x) scanf("%d", &x)
#define pi(x) printf("%d", x)
#define gl(x) scanf("%lld", &x)
#define pl(x) printf("%lld", x)
#define sp printf(" ")
#define nl printf("\n")

typedef long long int ll;
typedef long double ldb;

ll f[10000010], cnt[10000010];
ll isp[10000010];
main(){
    int n;
    gi(n);
    for(int i = 0, x; i < n; ++i){
        gi(x);
        cnt[x]++;
    }
    for(ll i = 2; i <= 10000000; ++i){
        if(isp[i]) continue;
        for(ll j = i; j <= 10000000; j+=i){
            f[i] += cnt[j];
            isp[j] = 1;
        }
    }
    for(int i = 1; i <= 10000000; ++i){
        f[i] += f[i-1];
    }
    int m;
    gi(m);
    while(m--){
        ll l, r;
        gl(l); gl(r);
        if(l > 10000000){
            printf("0\n");
            continue;
        }
        r = min(r, 10000000ll);
        pl(f[r] - f[l-1]);nl;
    }
}
