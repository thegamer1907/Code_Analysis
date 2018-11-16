#include<bits/stdc++.h>
using namespace std;
vector<vector<int> >graph;
int n,m;
int flag=0;
void dfs(int s)
{
    for(int i=0;i<graph[s].size();i++)
    {
        if(graph[s][i]==(m-1))
        {
            flag++;
            return;
        }
            dfs(graph[s][i]);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>n>>m;
    graph.resize(n);
    int x;
    for(int i=0;i<n-1;i++)
    {
        cin>>x;
        graph[i].push_back(i+x);
    }
    dfs(0);
    if(flag)
        cout<<"YES";
    else
        cout<<"NO";
}
