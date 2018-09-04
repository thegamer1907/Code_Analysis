#include<bits/stdc++.h>
#define long long long
using namespace std;
long n,m,lo,hi,md,sum,ans,k;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin>>n>>m>>k;

    lo=1;
    hi=n*m;

    while(hi-lo>3)
    {
        md=(lo+hi)/2;
        sum=0;
        for(long i=1;i<=n;i++)sum+=min(m,(md-1)/i);
        if(sum<k)lo=md;
        else hi=md;
    }
    for(long j=lo;j<=hi;j++)
    {
        sum=0;
        for(long i=1;i<=n;i++)sum+=min(m,(j-1)/i);
        if(sum<k)ans=j;
    }
    cout<<ans<<endl;
    return 0;
}