#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int mx=INT_MIN;
    int mn;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mx = max(mx,a[i]);
    }
    int eq = 0;
    int ans2 = mx + m;
    for(int i=0;i<n;i++) eq += (mx - a[i]);
    mn = mx;
    if(eq<m)
    {
        m-=eq;
        mn += int(m/n);
        if(m%n) mn+=1;
    }
    cout<<mn<<" "<<ans2<<endl;
}
