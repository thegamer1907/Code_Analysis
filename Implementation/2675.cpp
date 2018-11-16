// By Kishan Radia

#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;


int main(){
    ll n,i,k;
    cin>>n;
    ll a[n],c=1,ans=1;
    for(i=0;i<n;i++)cin>>a[i];
    map<ll,ll> m;
    for(i=0;i<n;i++){
        m.insert(make_pair(a[i],i+1));
    }
    for(i=1;i<=n;i++)cout<<m[i]<<" ";
    return 0;
}