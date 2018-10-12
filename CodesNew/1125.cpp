#include <bits/stdc++.h>
#define ll long long int

using namespace std;

ll func(ll k, ll n){

    ll ans = 0;
    long double orig_n = n;

    while(true){
        
        if(n > k)
            ans += k;
        else{
            ans += n;
            break;
        }
        n = n-k;
        ll petya = n/10;
        n -= petya;
    }

    if(ans >= ceil(orig_n/2))
        return 1;
    else
        return 0;
}

ll bin_search(ll n){

    ll l = 1;
    ll r = n;
    ll ret = -1;

    while(l <= r){

        ll mid = (l+r)/2;
        ll ans = func(mid, n);

        if(ans == 1){
            r = mid -1;
            ret = mid;
            //printf("BINSEARCH %lld\n", mid);
        }
        else
            l = mid+1;
    }

    return ret;

}

int main(){

    ll n;
    cin>>n;

    printf("%lld\n", bin_search(n));
    return 0;
}
