#include<bits/stdc++.h>
using namespace std;
int n,t;
bool OKMAMA(int x,int a[])
{
    for(int i=0;i<=(n-x);i++)
    {
        if(a[i+x]-a[i]<=t)
            return true;
    }
    return false;
}
int main()
{
    //int n,t;
    cin>>n>>t;
    int a[n+5];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    a[0]=0;
    for(int i=1;i<=n;i++)
        a[i]+=a[i-1];
    int low=1;
    int high=n;
    int ans=0;
    int weed=0;
    while(low<=high)
    {
        weed=(low+high)>>1;
        if(OKMAMA(weed,a))
        {
            ans=weed;
            low=weed+1;
        }
        else
            high=weed-1;

    }
    cout<<ans;
}
