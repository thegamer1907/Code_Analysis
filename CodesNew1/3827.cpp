#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, a[100005], mx;

bool Check(ll x) {
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        sum += x - a[i];
    }
    return sum >= x; 
}

int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    
    ll r = 1e10, l = 1, mid;
    while(r > l + 1) {
        mid = (r + l) / 2;
        bool ok = Check(mid);
        if(ok) r = mid;
        else l = mid;
    }
    
    cout << max(r, mx) << endl;
    return 0; 
} 