#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define oo 666666666

void DFS0(vector<vector<pair<ll,ll>>>&G, vector<ll>&D, int c, int p)
{
    D[c]++;
    for(auto&u: G[c])
    if(u.first!=p)
    {
        DFS0(G,D,u.first,c);
        D[c]+=D[u.first];
    }
}

int DFS(vector<vector<pair<ll,ll>>>&G, int c, ll dist, int p, vector<ll>&A, vector<ll>&D)
{
    int ats = 0;
    if(dist > A[c])return D[c];
    for(auto&u : G[c])
        if(u.first!=p)
            ats+=DFS(G,u.first,max(0LL,dist+u.second),c,A,D);

    return ats;
}

int main()
{
    ios::sync_with_stdio(0);
    int n;
    cin>>n;
    vector<ll>A(n+1),D(n+1);
    for(int i=1; i<=n; i++)
        cin>>A[i];

    vector<vector<pair<ll,ll>>>G(n+1);

    for(int i=2; i<=n; i++)
    {
        ll p,c;
        cin>>p>>c;
        G[i].push_back({p,c});
        G[p].push_back({i,c});
    }

    DFS0(G,D,1,-1);
    cout<<DFS(G,1,0,-1,A,D);
}
