#include <bits/stdc++.h>
using namespace std;
#define loop(x,n) for(ll x = 0; x < n; ++x)
typedef long long ll;
int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    ll n;ll S;
    cin>>n>>S;
    ll a[n+1];ll sum[n+1];ll bin[n+1];
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
        bin[i]=i;
    }
    ll beg=1,end=n;ll ss;ll k;ll mk,mss;ll flag=0;
    while(beg<=end)
    {
        ll mid=(beg+end)/2;
        k=bin[mid];
        for(ll i=1;i<=n;i++)
        {
            sum[i]=a[i]+k*i;
        }
        sort(sum+1,sum+n+1);
        ss=0;
        for(ll i=1;i<=k;i++)
        {
            ss+=sum[i];
        }
        if(ss<=S)
            {beg=mid+1;mk=k;mss=ss;flag=1;}
        else
            end=mid-1;
    }
    if(flag==1)
    cout<<mk<<" "<<mss<<endl;
    else
        cout<<"0 0"<<endl;


}
