#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i,n) for(ll i=1; i<=n; i++)
#define loop2(i,n) for(ll i=2; i<=n; i++)
#define loopo(i,n) for(ll i=0; i<=n; i++)
int main()
{
ios::sync_with_stdio (false);
cin.tie(0);
cout.tie(0);
ll i,j,k,m,n,l,r;
cin>>n;
ll a[n+7];
loop(i,n){cin>>a[i];if(i>1)a[i]=a[i]+a[i-1];}
cin>>k;
ll b[k+7];
loop(i,k)cin>>b[i];
loop(i,k)
{
    l=1;
    r=n;
    if(b[i]<=a[1])r=1;
    else
    while(r-l>1)
    {
        m=(l+r)/2;
        if(a[m]<b[i])l=m;else r=m;
    }
    cout<<r<<"\n";
}

return 0;
}

