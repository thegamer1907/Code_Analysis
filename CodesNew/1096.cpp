#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool check(ll k, ll n) {
    ll first = 0;
    ll second = 0;
    while (n > 0) {
        ll eat = min(n, k);
        first += eat;
        n -= eat;
        eat = n / 10;
        second += eat;
        n -= eat;
    }
    return first >= second;
}

int main() {
    ll n;
    cin >> n;
    ll low = 1;
    ll high = n;
    ll ans = 1;
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        if (check(mid, n)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans << endl;
}
