#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n,x;
    cin>>n;
    int ans=1,mn=1e9;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        x=((x-i)+(n-1))/n;
        if(x<mn)
        {
            mn=x;
            ans=i+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
