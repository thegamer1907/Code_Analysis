#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

const ll INF = 1e18;
const ll mod = 1e9 + 7;
const ld e = 1e-7;

int main() {
    ll n, a, b;
    cin >> n >> a >> b;
    if(a > b)
        swap(a, b);
    --a, --b;
    ll l = 0, r = n - 1;
    ll c = 1;
    while((1ll << c) != n)
        ++c;
    ll p = c;
    while(r - l >= 1){
        ll m = (r + l) / 2;
        if(a <= m && b > m){
            if(p == c){
                cout << "Final!";
            }
            else{
                cout << p;
            }
            return 0;
        }
        --p;
        if(a > m)
            l = m + 1;
        else r = m;
        if(r - l == 1)
            break;
    }
    cout << 1;
    return 0;
}