#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
const ll N=5e5+10;
ll n,m,k,mid,x,y,l,r,t=0,h=0;
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    cin >> n >> m >> k;
    l=0;
    r=5e5*5e5+10;
    while(r-l>1)
    {
        mid=l+r>>1;
        t=0;
        for(ll i=1; i<=n; i++)
        {
            x=mid/i;
            x=min(x,m);
            t+=x;
        }
        if(t<k)
            l=mid;
        else
            r=mid;
    }
    cout << r << endl;
    return 0;
}
