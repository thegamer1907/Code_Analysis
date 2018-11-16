//in the name of Allah
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int f=0;
    int ans=0;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    for(int i=0; i<n; i++)
    {
        if(a[i]<=0 )
            f++;
    }
    if(f==n)
    {
        cout<<0;
        return 0;
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
            ans++;
    }
    cout<<ans;
    return 0;
}
