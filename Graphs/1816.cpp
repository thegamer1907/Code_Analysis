#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sz(x) (ll)(x.size())
int main(){
    ll n;
    cin>>n;
    ll a[n];
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll m;
    cin>>m;
    ll b[m];
    for (ll i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + m);
    ll ans=0;
    for (ll i = 0; i < n; i++) {
        for (ll j = 0; j < m; j++) {
            if (abs(a[i] - b[j]) <= 1) {
                ans++;
                b[j] = -1000000;
                break;
            }
        }
    }
    cout<<ans;
}