#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;
int main(void)
{
    long long int n,m;
    long long int a[n];
    cin>>n>>m;
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long int prefix[n+1];
    prefix[0]=0;
    long long int sum = 0;
    for(long long int i=0;i<n;i++)
    {
        sum+=a[i];
        prefix[i+1]=sum;
    }
    long long int ans=0,lp=0,rp=0;
    for(rp=0;rp<=n;rp++)
    {
        if(prefix[rp]- prefix[lp] <= m)
        {
            ans = max(ans,rp-lp);
        }
        else
        {
            lp++;
        }
    }

    cout<<ans;
}
