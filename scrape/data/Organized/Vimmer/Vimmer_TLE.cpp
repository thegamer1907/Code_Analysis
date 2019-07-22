#include <bits/stdc++.h>
#define maxn 1000005
#define F first
#define S second
#define pb push_back
using namespace std;
typedef long long ll;


ll n,k,t;
int m,ans=0;
vector <ll> g;

int main()
{
    cin.tie(NULL); cout.tie(NULL); ios_base::sync_with_stdio(0);
    //freopen("family.in","r",stdin); freopen("family.out","w",stdout);
    cin >> n >> m >> t;
    for (int i=0; i<m; i++)
    {
        int x;
        cin >> x;
        g.pb(x);
    }
    int j=0;
    k=t;
    while (j<m)
    {
        int nm=j;
        ans++;
        while (j<m && g[j]-nm<=k) j++;
        if (nm==j) {ans--; while (g[j]-nm>k) k+=t;}
    }
    cout << ans;
}