#include <bits/stdc++.h>
#define ll long long
const int maxn = 2e5+9;
using namespace std;
ll n,k,a;
map<ll, ll> m, l;
int main(){
    scanf("%d%d",&n,&k);
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
        scanf("%lld",&a);
        if (a % k == 0) {
            ans += m[a/k];
            m[a] += l[a/k];
        }
        l[a] ++;
    }
    printf("%lld\n",ans);
    return 0;
}
