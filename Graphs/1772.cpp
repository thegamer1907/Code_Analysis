#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll n;
    cin>>n;
    ll idx;
    cin>>idx;
    ll a[n-1];
    n-=1;
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll reach = 1;
    if(reach==idx){
        cout<<"YES";
        return 0;
    }
    for(ll i=0;i<n;){
        reach += a[i];
        i +=a[i];
        // cout<<reach<<" ";
        if(reach==idx){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
