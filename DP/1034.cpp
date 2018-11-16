#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAXN 4005
int main(){
    ll n,i,j;
    cin>>n;
    vector<ll> a(n+1),sum(n+1,0);
    for(i=1;i<=n;i++) cin>>a[i];

    for(i=1;i<=n;i++) sum[i]=sum[i-1]+a[i];

    ll t=sum[n],res=0;
    for(i=1;i<=n;i++){
        for(j=i;j<=n;j++){
            ll cur=t-2*(sum[j]-sum[i-1])+(j-i+1);
            res=max(res,cur);
        }
    }
    cout<<res<<endl;
}