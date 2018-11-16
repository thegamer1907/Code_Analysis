/*   You have lost, my dear   */

#include<bits/stdc++.h>
#pragma GCC optimize("O2")
#define mod 1000000007
using namespace std;
long long n,dist[100002],val[100002],cate[100002];
bool bad[100002];
vector<pair<long long, long long> >v[100002];
void dfs1(int tata, int nod)
{
    cate[nod]=1;
    for(int i=0;i<v[nod].size();++i)
    {
        long long x=v[nod][i].first;
        if(x==tata)
            continue;
        dist[x]=dist[nod]+v[nod][i].second;
        dfs1(nod, x);
        cate[nod]+=cate[x];
    }
}
void dfs2(int dad, int nod, long long mind)
{
    if(dist[nod]-mind>val[nod])
        bad[nod]=1;
    for(int i=0;i<v[nod].size();++i)
    {
        int x=v[nod][i].first;
        if(x==dad)
            continue;
        dfs2(nod, x, min(mind,dist[nod]));
    }
}
int sol;
void dfs3(int dad, int nod)
{
    ++sol;
    for(int i=0;i<v[nod].size();++i)
    {
        int x=v[nod][i].first;
        if(x==dad)
            continue;
        if(!bad[x])
            dfs3(nod, x);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i)
        cin>>val[i];
    for(int i=2;i<=n;++i)
    {
        long long a,b;
        cin>>a>>b;
        v[a].push_back({i,b});
        v[i].push_back({a,b});
    }
    dfs1(0,1);
    dfs2(0,1,(1LL<<60));
    dfs3(0,1);
    cout<<n-sol;
    return 0;
}
