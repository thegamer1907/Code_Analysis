#include <bits/stdc++.h>
using namespace std;
int n,h,x,ans;
int main()
{
    cin>>n>>h;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x<=h)
            ans++;
        else ans+=2;
    }
    cout<<ans<<"\n";
}
