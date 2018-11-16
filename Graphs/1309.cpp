#include<bits/stdc++.h>
using namespace std;
class graph
{
    unordered_map<int,list<int>> m;
    void dfshelper(unordered_map<int,bool> &visit,int src)
    {
        visit[src]=1;
        for(auto i:m[src])
        {
            if(!visit[i])
            {
                dfshelper(visit,i);
            }
        }
    }
    public:void addEdge(int u,int v)
    {
        m[u].push_back(v);
    }

    bool dfs(int t)
    {
        unordered_map<int,bool> visit;
        dfshelper(visit,1);

        return visit[t];
    }
};
int main()
{
    int n,m;
    cin>>n>>m;
    graph g;
    n--;
    int i = 1;
    while(n--)
    {
        int t;
        cin>>t;
        g.addEdge(i,i+t);
        i++;
    }
    if(g.dfs(m))cout<<"YES";
    else cout<<"NO";
    return 0;
}
