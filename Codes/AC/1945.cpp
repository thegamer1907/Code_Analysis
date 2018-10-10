#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;
ll n, d, now;
map<ll, ll>one, two;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> d;
    ll ans = 0;
    if(d == 1) {
        ll ans = 0;
        for(int i = 1; i <= n; ++i) {
            cin >> now;
            if(one.count(now) && one[now] >= 2) {
                ans += one[now] * (one[now] - 1) / 2;
            }
            one[now]++;
        }
        cout << ans << endl;
        return 0;
    }
    for(int i = 1; i <= n; ++i) {
        cin >> now;
        if(now % d == 0 && two.count(now / d))  ans += two[now / d];
        if(now % d == 0 && one.count(now / d))  two[now] += one[now / d];
        one[now]++;
    }
    cout << ans << endl;

}
