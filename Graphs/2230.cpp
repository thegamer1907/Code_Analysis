#include <bits/stdc++.h>

using namespace std;

int n,i,j,c,ans,t[2001];

int main()
{
    cin>>n;
    for(i=1;i<=n;i++)
        cin>>t[i];
    for(i=1;i<=n;i++)
    {
        c=0;
        j=i;
        while(t[j]!=-1)j=t[j],c++;
        ans=max(ans,c);
    }
    cout<<ans+1;
    return 0;
}
