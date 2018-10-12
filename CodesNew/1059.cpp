#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
ll s;
ll a[100003];
ll calc(ll k){
    ll b[n];
    for(ll i=0; i<n; i++){
        b[i] = a[i]+(i+1)*k;
    }
    sort(b,b+n);
    ll sum =0;
    for(ll i=0; i<k; i++){
        sum+=b[i];
    }
    return sum;
}
bool check(ll k){
    return calc(k)<=s;
}
int main(){
    cin>>n>>s;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ll l = 0, r= n;
    while(l<r){
        ll mid = (r-l+1)/2+l;
        if(check(mid)){
            l = mid;
        }else{
            r = mid-1;
        }
    }
    cout<<l<<" "<<calc(l)<<endl;
}