#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007
ll answer(ll* a,ll i,ll j,ll n) {
    ll b[n],t,ans=0;
    for(t=0;t<n;t++) b[t]=a[t];
    for(t=i;t<=j;t++) b[t]=1-b[t];
    for(t=0;t<n;t++) {
        if(b[t]==1) ans++;
    }
    return ans;  
}
int main() {
    ll n;
    cin>>n;
    ll a[n],i,j,ans=0,temp=0;
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++) {
        for(j=i;j<n;j++) {
            temp=answer(a,i,j,n);
            if(temp>ans) ans=temp;
        }
    }
    cout<<ans<<"\n";  
}