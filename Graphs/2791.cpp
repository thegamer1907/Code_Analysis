#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define oo INT_MAX/2

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>c(n+1);
    for(int i=1; i<=n; i++)
        cin>>c[i];

    vector<set<int>>G(100001);

    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        if(c[u]==c[v])continue;
        G[c[u]].insert(c[v]);
        G[c[v]].insert(c[u]);
    }
    int ats = *min_element(c.begin()+1,c.end());
    for(int i=1; i<100001; i++)
        if(G[i].size() > G[ats].size())ats=i;

    cout<<ats;
}
