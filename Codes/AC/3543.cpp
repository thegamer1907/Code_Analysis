#include <bits/stdc++.h>
typedef long long ll ;
using namespace std;

ll n  = 0 ;

bool check(ll mid) {


    ll get = 0 ;
    ll tot = n ;

    while(tot > 0) {
         ll t = min(tot , mid);
         get += t ;
         tot -= t ;
         tot -= (tot / 10);
    }
    return 2 * get >= n ;
}

int main() {

    //ios::sync_with_stdio(false);

    cin >> n ;

    ll low = 1 , high = n , res = n;

    while(low <= high) {
        ll mid = (low + high) / 2 ;
        if(check(mid))
            res = mid , high = mid - 1 ;
        else
            low = mid + 1 ;
    }

    cout << res << endl ;




    return 0;
}
