#include "bits/stdc++.h"

using namespace std;

#define ll long long int
#define FOR(i,a,b) for(ll i =a;i<b;i++)
inline ll setbits(ll a){ return __builtin_popcount(a);}

ll n;
ll a[500005];

int main(){
    cin>>n;
    FOR(i,0,n) cin>>a[i];
    sort(a,a+n);
    ll up = n/2;
    ll ans = 0;
    for(ll i = 0;i<n/2 and up<n;i++){
        if(a[i]*2<=a[up]){
            ans+=1;
            up+=1;
        }
        else{
            up+=1;
            i-=1;
        }
    }
    cout<<n-ans;
    return 0;
}