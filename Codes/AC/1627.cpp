#include<bits/stdc++.h>
#define int long long
using namespace std;
int n;
int s;
int m[100010];
int tmp[100010];
signed main()
{
    cin>>n>>s;
    for(int i=1;i<=n;i++)
    {
        cin>>m[i];
    }
    int ans=0;
    int l,r;
    l=0,r=n;
    while(l<r)
    {
        int mid=(l+r+1)/2;
        for(int i=1;i<=n;i++)
            tmp[i]=m[i]+i*mid;
        sort(tmp+1,tmp+1+n);
        int sum=0;
        for(int i=1;i<=mid;i++)
        {
            sum+=tmp[i];
        }
        if(sum<=s)
        {
            ans=sum;
            l=mid;
        }
        else
            r=mid-1;
    }
    cout<<l<<" "<<ans;
}