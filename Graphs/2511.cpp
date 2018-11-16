#include <bits/stdc++.h>
#define ill int long long
#define fi first
#define se second
#define pb push_back
#define ld long double
#define pp push_front
#define mp make_pair
using namespace std;
ill n,i,j,d[10005],cnt;
vector <ill> my[10005];
void dfs(ill x,ill p)
{
    if (d[x]!=d[p])cnt++;
    ill j,to;
    for (j=0;j<my[x].size();j++)
    {
        to=my[x][j];
        if (to!=p)
            dfs(to,x);
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    //freopen("graphtail.in","r",stdin);freopen("graphtail.out","w",stdout);
    cin>>n;
    for (i=2;i<=n;i++)
    {
        ill x;
        cin>>x;
        my[x].pb(i);
        my[i].pb(x);
    }
    for (i=1;i<=n;i++)
        cin>>d[i];
    dfs(1,0);
    cout<<cnt;
}
