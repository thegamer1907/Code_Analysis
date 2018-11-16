#include <bits/stdc++.h>
using namespace std;

class Graph
{
    int V;
    vector<vector<int> > adj;

    public:
    Graph(int v)
    {
        this->V=v;
        vector<vector<int> > temp(v,vector<int>());
        adj=temp;
    }
    
    void add(int x,int y,int w=0)
    {
        adj[x].push_back(y);
    }

    bool dfs(int s,int d,vector<bool> vis)
    {
        if(s==d)
            return true;

        vis[s]=true;
        
        for(int i=0;i<adj[s].size();i++)
            if(!vis[adj[s][i]])
                if(dfs(adj[s][i],d,vis))
                    return true;

        return false;
    }

    bool dfsU(int s,int d)
    {
        vector<bool> vis(V+1,false);
        return dfs(s,d,vis);
    }

};


int main() 
{
    int n,t;
    cin>>n>>t;
    Graph g(n+1);

    for(int i=1;i<n;i++)
    {
        int x;
        cin>>x;
        g.add(i,i+x);
    }

    if(g.dfsU(1,t))
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
