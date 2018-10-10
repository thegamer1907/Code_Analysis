#include <bits/stdc++.h>
using namespace std;
int n;
double len,a[1005],ans;
int main()
{
    cin>>n>>len;
    for(int i=1; i<=n; i++)
        cin>>a[i];
    sort(a+1,a+1+n);
    ans=max(a[1],len-a[n])*2;
    for(int i=2;i<=n;i++)
        ans=max(a[i]-a[i-1],ans);
    cout<<setprecision(9)<<fixed<<ans/2;
}
