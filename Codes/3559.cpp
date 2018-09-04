#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool simulate(ll n,ll k){
    ll vasha = 0;
    ll nposta = n;

    while (n > 0){
        if (n > k){
            vasha += k;
            if (vasha >= (nposta+1)/2){return 1;}

            n -= k;
        }else{
            vasha += n;
            if (vasha >= (nposta+1)/2){ return 1; }
            break;
        }
        if (vasha >= (nposta+1)/2){ return 1; }

        ll percent = n/10;
        n -= percent;
    }
    return 0;
}


int main(){
    ll n; cin >> n;
    ll A = 0;
    ll B = 1e18+5;
    while (A+1 != B){
        ll h = (A+B)/2;
        if (simulate(n,h)){
            B = h; /// k muy grande
        }else{ // sim >= h/2
            A = h; // k justo
        }
    }
    cout << B << '\n';
}
