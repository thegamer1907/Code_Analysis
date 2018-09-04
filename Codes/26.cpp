#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,l;
    cin>>n>>l;
    ll i,k,a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    double ans=a[0];
    if(l-a[n-1]>ans)ans=l-a[n-1];
    ll max=0;
    for(i=1;i<n;i++){
        if(a[i]-a[i-1]>max)max=a[i]-a[i-1];
    }
    
    double temp=(float)max/2;
    //cout<<temp;
    if(temp>ans)ans=temp;
    printf("%.9lf",ans);
    return 0;
}