#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, a[111111],m;
ll bins(ll x){
    ll l=0, r=n, m;
    while(l+1<r){
        m=(l+r)>>1;
        if (a[m]==x){
            return m;
        }
        if (a[m]>x)
            r=m;
        else
            l=m;
    }
    return r;
}
ll x;
int main (){
    cin >> n;
    for (ll i=1; i<=n; ++i){
        scanf("%lld", &x);
        a[i]=x+a[i-1];
    }
    cin >> m;
    for (ll i=0; i<m; ++i){
        scanf("%lld", &x);
        cout << bins(x) << "\n";
    }
}
