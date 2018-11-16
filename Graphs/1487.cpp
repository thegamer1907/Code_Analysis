#include<bits/stdc++.h>
using namespace std;
class graph
{
    map<int,list<int> > m;
    public:void addEdge(int u,int v)
    {
        m[u].push_back(v);
    }
    void dfshelper(map<int,bool> &visit,int i)
    {
        visit[i] = 1;
        for(auto j:m[i])
        {
            if(!visit[j])
            {
                dfshelper(visit,j);
            }
        }
    }
    bool dfs(int k)
    {
        map<int,bool> visit;


            if(!visit[1])
            {
                dfshelper(visit,1);
            }
        return visit[k];
    }
};
int main()
{
    int n,k;
    cin>>n>>k;
    int j = 1;
    graph g;
    for(int i=0;i<n-1;i++)
    {
        int t;
        cin>>t;
        g.addEdge(j,j+t);
        j++;
    }
    if(g.dfs(k))cout<<"YES";
    else cout<<"NO";
    return 0;
}
