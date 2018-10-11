#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m,i,j,k,arr[100005];
int check(ll bo)
{
    int q=1;
    for(i=1;i<=n-bo+1;i++)
    {
        if((arr[i+bo-1]-arr[i-1])<=m)
            q=0;
    }
    return q;
}

ll bin(ll lo,ll hi)
{
    ll mid,ans=0;
    while(lo<=hi)
    {
        mid=(lo+hi)/2;
        int chk=check(mid);
        if(chk==0)
        {
            ans=mid;
            lo=mid+1;
        }
        else
            hi=mid-1;
    }
    return ans;
}

int main()
{
    cin>>n>>m;
    for(i=1; i<=n; i++)
    {
        cin>>k;
        arr[i]=arr[i-1]+k;
    }
    ll res=bin(0,n);
    cout<<res;
    return 0;
}

