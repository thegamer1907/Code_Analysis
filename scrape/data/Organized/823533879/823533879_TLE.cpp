#include <iostream>
#include <algorithm>
using namespace std;

const int maxn = 1e5+5;
typedef long long ll;
ll num[maxn];
ll n,m,k;

int main()
{
    cin >> n >> m >> k;
    for(int i = 0; i < m; i++)
        cin >> num[i];
    ll ans = 0;
    ll cnt = 0;
    ll t = k;
    for(int i = 0; i < m; i++) {
        if(num[i] <= k)
            cnt++;
        else {
            k += cnt;
            if(cnt)
                ans++;
            while(num[i] > k) {
                k += t;
            }
            cnt = 1;
        }
    }
    if(cnt) ans++;
    cout << ans << endl;
    return 0;
}