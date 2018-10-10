#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll S[100005];

int main()
{
    //ifstream cin("in.in");
    ios_base::sync_with_stdio(0);
    ll n, s=0;
    cin >> n;
    for(ll i = 1; i <= n; i++) {
        ll a;
        cin >> a;
        s = s + a;
        S[i] = s;
    }
    ll m;
    cin >> m;
    for(ll i = 0; i < m; i++) {
        ll x, l = 0, r = n + 1;
        cin >> x;
        while (l < r) {
            ll mid = (l + r) / 2;
            if (S[mid] < x) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        cout << l << "\n";
    }
}
