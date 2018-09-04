#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cctype>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <sstream>
#include<iomanip>
using namespace std;
typedef long long ll;
#define inf int(0x3f3f3f3f)
#define mod int(1e9+7)
#define pi acos(-1)
ll n,m,k;
bool as(ll x)
{
    ll s=0;
    for(ll i=1;i<=n;i++)
    {
        s+=min(m,x/i);
    }
    if(s>=k)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    while(cin>>n>>m>>k)
    {
        ll l=0,r=m*n,mid;
        while(l+1<r)
        {
            mid=(l+r)>>1;
            if(as(mid))
            {
                r=mid;
            }
            else
            {
                l=mid;
            }
        }
        cout<<r<<endl;
    }
    return 0;
}
