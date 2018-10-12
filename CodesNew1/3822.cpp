#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin>>n;
    ll a[n],sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+n);
    
    ll ans=0;
    ll x=sum/(n-1);
    if(sum%(n-1))
        x++;
    //game=x        (n-1)*x>=sum
    ans=max(a[n-1],x);
    cout<<ans;
}