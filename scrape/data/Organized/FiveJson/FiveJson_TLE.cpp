#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int maxn = 1e5+5;
ll n,m,k;
ll a[maxn];
int main()
{
    cin>>n>>m>>k;
    for (int i=1; i<=m; i++ )
    {
        scanf("%lld",&a[i]);
    }
    int ans = 0;
    int mx = ceil(a[1]/(double)k)*k;
    int cnt = 0;
    for (int i=1; i<=m; i++ )
    {
        if(a[i]<=mx)
        {
            cnt++;
        }
        else
        {
            mx+=cnt;
            ans++;
            cnt=0;
            if(a[i]>mx)
            {
                mx=mx + ceil((a[i]-mx)/(double)k)*k;
            }
            i--;
        }
    }
    if(cnt)
        ans++;
    cout<<ans;
    return 0;
}