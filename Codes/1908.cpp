#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define FOROP(i,a,b,op) for(int i=a;i<b;op)
#define FORD(i,a,b) for(int i=a;i>=b;--i)
#define PB push_back
#define FI first
#define SE second
#define ALL(X) (X).begin(),(X).end()
using namespace std;
using ll = long long;

int main () {
    ios_base::sync_with_stdio(false);
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> V(n);
    FOR(i,0,n) cin >> V[i];
    ll ans = 0;
    map<ll, ll> upper, lower;
    FOR(i,0,n){
        if (upper.count(V[i]) == 0) upper[V[i]] = 0;
        upper[V[i]]++;
    }
    FOR(i,0,n){
        if (upper.count(V[i]) > 0 && upper[V[i]] > 0) upper[V[i]]--;
        if (V[i] % k == 0) {
            if (lower.count(V[i] / k) > 0 && upper.count(V[i] * k) > 0)
                ans += lower[V[i] / k] * upper[V[i] * k];
        }
        if (lower.count(V[i]) == 0) lower[V[i]] = 0;
        lower[V[i]]++;
    }
    cout << ans << endl;
}
