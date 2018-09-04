#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define mk make_pair
#define pb push_back

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;

ll check(ll k, ll N){
    ll ret = 0;
    while (N > 0){
        ret += min(k,N);
        N -= min(N,k);
        ll aux = N/10;
        N -= aux;
    }
    return ret;
}

int main(){
    ll n; cin >> n;
    ll lo = 1, hi = n;
    ll ans = n;
    while (lo <= hi){
        ll mi = (hi+lo)/2;

        if (2*check(mi,n) >= n){
            hi = mi-1;
            ans = mi;
        }else {
            lo = mi+1;
        }
    }
    cout << ans << endl;
}
