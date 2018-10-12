#include <bits/stdc++.h>
#define ll long long
#define MAXN 100005
using namespace std;
ll n;
ll a[MAXN];
bool check(ll x){
    ll god=0;
    for(int i=1; i<=n; i++){
        if(a[i]>x) return 0;
        if(a[i]<x){
            god+=x-a[i];
        }
    }
    if(god<x) return 0;
    else return 1;
}
int main(){
    scanf("%lld",&n);
    for(int i=1; i<=n; i++){
        scanf("%lld",&a[i]);
    }
    ll l=0;
    ll r=(1ll<<40);
    while(r-l>=3){
        ll mid=(l+r)/2;
        if(check(mid)) r=mid;
        else l=mid;
    }
    for(ll i=l; i<=r; i++){
        if(check(i)){
            printf("%lld",i);
            return 0;
        }
    }//
    return 0;
}
