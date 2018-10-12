#include<bits/stdc++.h>
using namespace std;

int a[105];
int main()
{
    int i,r,k,n,mn,mx=-1,ans = -1;
    cin>>n>>k;
    int g = k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
    }
   /// cout<<mx<<endl;
    while(g--)
    {
        mn=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            if(a[i]<mn)
            {
               r=i;
               mn=a[i];
            }
        }
        a[r]++;
    }
    for(int i=1;i<=n;i++)
        ans=max(ans,a[i]);
    cout<<ans<<" "<<mx+k;
    return 0;
}
