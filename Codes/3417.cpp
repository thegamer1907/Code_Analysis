//                                        KiSmAt 
#include "bits/stdc++.h"
using namespace std;

typedef long long  ll;

const int N = 1e5 + 10;

ll res;
ll a[N];
ll sum; 

bool check(ll k, ll n){
    ll t = n;
    sum = 0;
    while(n){
        sum += min(k, n);
        n = max(n - k, (ll)0);
        n = max(n - (n / 10), (ll) 0);
    }
    return sum * 2 >= t;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll n, low = 0, high = 1e18;
    cin >> n;
    while(low + 1 < high){
        ll mid = (low + high) / 2;
        if(check(mid, n)){
            high = mid;
        }
        else{
            low = mid;
        }
    }
    cout << high;
}
// nEro
