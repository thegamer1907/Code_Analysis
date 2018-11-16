#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll n,m,q;
char b[505][505];
ll dph[505][505];
ll dpv[505][505];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(b,'_',sizeof b);
    memset(dph,0,sizeof dph);
    memset(dpv,0,sizeof dpv);
    cin >> n >> m;
    for(ll i=1;i<=n;i++)
    {
        for(ll j=1;j<=m;j++)
        {
            cin >> b[i][j];
        }
    }
    for(ll i=1;i<=n;i++) //
    {
        for(ll j=1;j<=m;j++)
        {
            dph[i][j] = dph[i-1][j] + dph[i][j-1] - dph[i-1][j-1];
            dpv[i][j] = dpv[i-1][j] + dpv[i][j-1] - dpv[i-1][j-1];
            if(b[i][j] == '.')
            {
                dpv[i][j] += b[i-1][j] == '.';
                dph[i][j] += b[i][j-1] == '.';
            }
        }
    }
    
    cin >> q;
    while(q--)
    {
        ll x,y,z,w;
        cin >> x >> y >> z >> w;
        ll ans = 0;
        if(z != x)
        {
            ans += dpv[z][w] - dpv[z][y-1] - dpv[x][w] + dpv[x][y-1];
        }
        if(y != w)
        {
            ans += dph[z][w] - dph[z][y] - dph[x-1][w] + dph[x-1][y];
        }
        cout << ans << endl;
    }
    return 0;
}
