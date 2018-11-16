#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,i;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)cin>>a[i];
    ll ans=1,t=1;
    for(i=1;i<n;i++){
        if(a[i]>a[i-1]){
            t++;
        }
        else t=1;
        if(t>ans)ans=t;
        //cout<<t<<endl;
    }
    cout<<ans;
    return 0;
}