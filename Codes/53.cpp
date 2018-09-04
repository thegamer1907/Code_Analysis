#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    ll sum = 0;
    scanf("%d", &n);
    vector<int> a(n);
    vector<ll> f(n);
    vector<int> dp(n, 0); 
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
        f[i] = sum;
    }
    if(sum % 3) {
        printf("0\n");
    } else {
        sum /= 3;
        for(int i = 0; i < n; i++) {
            if(f[i] == sum) {
                if(i == 0) dp[i] = 1;
                else dp[i] = dp[i-1] + 1;
            } else if(i > 0) {
                dp[i] = dp[i-1];
            }
        }
        ll cnt = 0, rsum = 0;
        for(int i = n-1; i > 1; i--) {
            rsum += a[i];
            if(rsum == sum) {
                cnt += dp[i-2];
            }
        }
        printf("%lld\n", cnt);
    }
    return 0;
}
