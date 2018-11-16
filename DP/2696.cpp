#include<bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define pii pair<int, int>
#define ll long long
#define fi first
#define se second
#define vi vector<int>
#define vl vector<ll>
#define vii vector<pair<int, int>>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vii a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].fi >> a[i].se;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || i == n - 1) {
            ++ans;
        } else {
            int prev = a[i - 1].fi;
            int ahead = a[i + 1].fi;
            if (a[i].fi - a[i].se > prev) {
                ++ans;
            }
            else if (a[i].fi + a[i].se < ahead) {
                ++ans;  
                a[i].fi = a[i].fi + a[i].se;
            }
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    int t = 1;
    // cin >> t;
    while (t--) solve();
}