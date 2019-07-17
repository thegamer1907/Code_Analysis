#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
typedef long long ll;
 
int main()
{
//    freopen("in.txt","r",stdin);
    ll n,m,k;
    cin>>n>>m>>k;
    ll x;
    ll r = k;
    ll s[100005];
    for(int i = 1; i<=m; i++)
        cin>>s[i];
    int ans = 0;
    for(int i = 1; i<=m;)
    {
        ll t = 0;
        if(s[i]>r)
        {
            ll tt = (s[i]-r)/k-2;
            r = tt*k+r;
 
            while(s[i]>r)
            {
                r = min(n,r+k);
            }
        }
        while(s[i]<=r&&i<=m)
        {
            i++;
            t++;
        }
        r = min(n,r+t);
        ans++;
        if(s[i]>r)
        {
            ll tt = (s[i]-r)/k-2;
            r = tt*k+r;
 
            while(s[i]>r)
            {
                r = min(n,r+k);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}