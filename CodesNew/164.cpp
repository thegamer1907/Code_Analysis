#include <bits/stdc++.h>

#define all(v) v.begin(),v.end()
#define sz(v) v.size()

typedef long long ll ;

using namespace std ;

ll FP(ll n,ll x){
    if(x==0)
        return 1 ;
    if(x==1)
        return n ;
    ll ans = FP(n , x/2) ;
    ans = ans*ans ;
    if(x%2!=0)
        ans = ans*n;
    return ans ;
}



int main() {
    int n ;
    ll k ;
    cin >> n >> k ;
    if(k%2!=0)
        cout << 1 << endl;
    else{
        ll cnt = 0 ;
        while(k%2==0){
            k /= 2 ;
            cnt++ ;
        }
        cout << cnt+1 << endl;
    }
    return 0;
}
