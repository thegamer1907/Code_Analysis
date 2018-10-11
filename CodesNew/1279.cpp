#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; ++i) {
        cin >> arr[i];
        arr[i] -= i;
        if(arr[i] < 0) arr[i] = 0;
    }
    ll minTime = 1e18;
    int ans = 0;
    for(int i = 0; i < n; ++i) {
        ll mult = (ll)ceil((arr[i])/(double)n);
        if(mult*n < minTime) {
            minTime = mult*n;
            ans = i+1;
        }
    }
    cout << ans << '\n';
    return 0;
}















