#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios::sync_with_stdio(0);
    ll n,m,k,a[100010];
    cin>>n>>m>>k;
    for(int i=1;i<=m;i++)cin>>a[i];
    int curtot=0,ans=1,curpos=(a[1]-1)/k,curtmp=1;
    for(int i=2;i<=m;i++)
    {
        if(curpos==(a[i]-curtot-1)/k)
        {
            curpos=(a[i]-curtot-1)/k;
            curtmp++;
        }
        else
        {
            ans++;
            curtot+=curtmp;
            curpos=(a[i]-curtot-1)/k;
            curtmp=0;
            i--;
        }
    }
    cout<<ans<<"\n";
    return 0;
}