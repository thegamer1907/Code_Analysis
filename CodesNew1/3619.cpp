#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,mx=0,s=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        mx=max(mx,a);
        s=s+a;
    }
    cout<<max(mx,(s+m-1)/n+1)<<" "<<mx+m;
    return 0;
}
