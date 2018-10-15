#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll b,p,sum=0,max1=0;
    cin>>b;
    cin>>p;
    sum=p;
    ll a[b];
    for(ll i=0;i<b;i++){
        cin>>a[i];
        sum=sum+a[i];
        max1=max(max1,a[i]);
    }
    ll ans=(sum/b);
    if(sum%b!=0)
    ans++;
    for(ll i=0;i<b;i++){
        if(a[i]>ans)
            ans=a[i];
    }
    cout<<ans<<" "<<(max1+p)<<endl;
    
    return 0;
    
}