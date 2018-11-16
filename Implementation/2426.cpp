#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,i,k;
    cin>>n>>k;
    ll c,temp=240-k,ans=0;
    for(i=n;i>=1;i--){
        c=(i*(i+1))*5;
        c=c/2;
        if(c<=temp){
            ans=i;
            break;
        }
    }
    cout<<ans;
    return 0;
}