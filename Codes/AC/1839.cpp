#include <stdio.h>
#include <iostream>
#include <string.h>
#include <math.h>
#define bug cout <<"bug" <<endl

using namespace std;
typedef long long ll;

ll n,m,k;
ll check(ll x){
    ll cnt=0;
    for(int i=1;i<=n;i++)   cnt+=min(x/i,m);
    return cnt >= k;
}

int main(void){
    cin >> n >>m >>k;
    ll l=1,r=n*m;
    ll ans;
    while(l<=r){
        ll mid=(l+r)/2;
        if(check(mid))  ans=mid,r=mid-1;
        else    l=mid+1;
    }
    cout << ans << endl;
}