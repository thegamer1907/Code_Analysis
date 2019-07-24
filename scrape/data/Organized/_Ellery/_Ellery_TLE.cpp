#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define mp make_pair
const int maxn = 4e5+5;
const int MOD = 1e9+7;
#define mod(x) x % MOD
#define INF 0x3f3f3f3f

ll a[maxn];

int main(){
    ll n, m, k;
    while(~scanf("%lld %lld %lld", &n, &m, &k)){
        for(int i = 1;i <= m;i++){
            scanf("%lld", a + i);
        }
        ll num = 0;
        ll ans = 0;
        for(int i = 1;i <= m;i++){
            ll cnt = 0;
            ans++;
            ll start = (a[i] / k) * k + 1 - num;
            ll end = start + k - 1 - num;
            int j = i;
            while(j <= m && a[j] - num <= end){
                cnt++;
                j++;
            }
            i = j - 1;
            num += cnt;
        }
        printf("%lld\n", ans);
    }
    return 0;
}