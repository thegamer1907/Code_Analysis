#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vii> vvii;
typedef vector<vvvi> vvvvi;

bool pred(ll n, ll k) {
    ll cur = 0, aux = n;
    while (n > 0) {
        if (n <= k) {
            cur += n;
            n = 0;
        } else {
            cur += k;
            n -= k;
            n -= n/10;
        }
    }
    return 2*cur >= aux;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll low = 1, high = n;
    while (low < high) {
        ll mid = (low + high) / 2;
        if (pred(n, mid)) high = mid;
        else low = mid + 1;
    }
    cout << high << "\n";
    return 0;
}