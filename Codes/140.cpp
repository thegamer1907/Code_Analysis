#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll n,i,k;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        if(i>0)a[i]+=a[i-1];
        //cout<<a[i]<<endl;
    }
    ll f[a[n-1]+1],c=1;
    k=0;
    for(i=1;i<=a[n-1];i++){
        f[i]=c;
        if(i==a[k]){
            k++;
            c++;
        }
        //cout<<f[i];
    }
    ll m;
    cin>>m;
    ll q[m];
    for(i=0;i<m;i++)cin>>q[i];
    for(i=0;i<m;i++)cout<<f[q[i]]<<endl;
    return 0;
}