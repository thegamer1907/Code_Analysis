#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base:: sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll n, t;
    cin >> n >> t;
    t--;
    ll a[n];
    for (ll i = 0; i < n; i++) cin >> a[i];
    ll ind = 0;
    while(ind < t) {
        ind += a[ind];
    }
    if(ind == t) cout << "YES";
    else cout << "NO";
}