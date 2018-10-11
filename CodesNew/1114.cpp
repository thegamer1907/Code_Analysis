// Vaqte codasto konkur be chap chap !!
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main () {
       ll n;
       cin >> n;
       ll l = 1, r = n;
       ll ans = r;
       while (l <= r) {
              ll mid = (l + r) / 2;
              //cout << mid << endl;
              ll sum = 0, tmp = n;
              while (tmp) {
                     ll x = min (tmp, mid);
                     tmp -= x;
                     tmp -= tmp/10;
                     sum += x;
              }
              if (sum >= (n / 2) + (n % 2)) ans = mid, r = mid - 1;
              else l = mid + 1;
       }
       cout << ans << endl;
       return 0;
}
