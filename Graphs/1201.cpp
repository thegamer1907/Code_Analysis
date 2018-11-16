//#####################################
//###    Himanshu Shukla @coldbeer  ###
//###    CSE NIT CALICUT            ###
//#####################################

#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define f(a, b) for (auto i = a; i < b; i++)
#define mp(a, b) make_pair(a, b)
#define p pair<int, string>
#define INF 0x3f3f3f3f
#define MAX 100001
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

//DIRECTED GRAPH
void addEdge_directed(vector<int> graph[],int u,int v)
{
    graph[u].emplace_back(v);
}
//END DIRECTED GRAPH

//BFS UTILITY ...i is node from which you want to trace path
bool BFS(vector<int> graph[],int from,int n,int reach)
{
    int visited[n+1] = {0};
    queue <int> unexplored;
    visited[from] = 1;
    unexplored.push(from);
    while (!unexplored.empty())
    {
        int vertex = unexplored.front();
        unexplored.pop();
        if (vertex == reach) return true;
        for (int k = 0;k<graph[vertex].size();k++)
        {
            if (visited[graph[vertex][k]] == 0)
            {
                visited[graph[vertex][k]] = 1;
                unexplored.push(graph[vertex][k]);
            }
        }
    }
    return false;
}
//END BFS

int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    vector<int> *transportation;
    transportation = new vector<int>[n+1];
    f(1,n)
    {
        int tmp;
        scanf("%d",&tmp);
        addEdge_directed(transportation,i,tmp+i);
    }
    if (BFS(transportation,1,n,t)) cout<<"YES\n";
    else cout<<"NO\n";
}
