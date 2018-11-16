#include <bits/stdc++.h>
using namespace std;


#define pb              push_back
#define mp              make_pair
#define ll              long long int
#define for0(i, n)      for (i = 0; i < n; i++)
#define for1(i, n)      for (i = 1; i <= n; i++)
#define SIZE            105
#define INF             9999999999999
#define pii             pair <ll, ll>
#define piii            pair <ll, pii>
#define scl(n)          scanf("%lld", &n)
#define FastRead        ios_base::sync_with_stdio(false);cin.tie(NULL)

ll a[SIZE];

int main() {
    FastRead;
    ll t = 0, n, e, x, y, z, i, j, k, g, q, ans = 0, sum = 0, c = 0, h;
    cin >> n;

    for1(i, n) cin >> a[i];

    for1(i, n) {

        sum = 0;
        for1(j, i-1) {
            sum += a[j];
        }

        x = i;

        while(x <= n) {
            c = 0;
            for(j = i; j <= x; j++) {
                c += (1 - a[j]);
            }
            for(j = x+1; j <= n; j++) {
                c += a[j];
            }

            ans = max(ans, sum+c);
            x++;
        }
    }

    cout << ans << "\n";

    return 0;
}

