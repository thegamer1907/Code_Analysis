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
    int n, q;
    cin >> n >> q;
    vector<ll> V(n + 1);
    FOR(i,0,n){
        cin >> V[i + 1];
        V[i + 1] += V[i];
    }
    ll h = 0;
    while(q--){
        ll k;
        cin >> k;
        h += k;
        int idx = upper_bound(ALL(V), h) - V.begin();
        if (idx == n + 1){
            idx = 1;
            h = 0;
        }
        cout << n - idx + 1 << endl;
    }
}
