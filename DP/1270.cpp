#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,i,j;
    cin>>n;
    vector<ll> a(n+1),z(n+1),o(n+1);
    for(i=1;i<=n;i++)
        cin>>a[i];
    ll zer=0;
    for(i=1;i<=n;i++)
    {
        if(a[i]==0)
            zer++;
        z[i]=zer;
    }
    ll one=0;
    for(i=1;i<=n;i++)
    {
        if(a[i]==1)
            one++;
        o[i]=one;
    }
    ll tot=0;
    for(i=1;i<=n;i++)
        tot+=a[i];
    vector<ll> v;
    for(i=1;i<=n;i++)
        for(j=i;j<=n;j++)
            v.push_back((z[j]-z[i-1])-(o[j]-o[i-1]));
    sort(v.begin(),v.end());
    tot+=v.back();
    cout<<tot<<endl;
}
