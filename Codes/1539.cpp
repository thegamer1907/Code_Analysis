#include<bits/stdc++.h>
#define ll long long
#define N 100005
using namespace std;
int a[N],n;
ll b[N];
ll solve(int k)
{
    for(int i=0;i<n;i++)
        b[i]=a[i]+(i+1)*(ll)k;
    sort(b,b+n);
    ll ans=0;
    for(int i=0;i<k;i++)
        ans+=b[i];
    return ans;
}
int main()
{
    ll s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
        scanf("%d",a+i);
    int lo=0,hi=n+1;
    while(lo<hi-1)
    {
        int mid= (hi+lo)/2;
        if( solve(mid)<=s)
            lo=mid;
        else
            hi=mid;
    }
    cout<<lo<<" "<<solve(lo);
return 0;
}
