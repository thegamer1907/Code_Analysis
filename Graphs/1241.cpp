#include <bits/stdc++.h>
using namespace std;

class Graph
{
public:
    vector <vector <long long int>> adjlist;    
    
    void AddVertices(long long int n)
    {
        long long int i;
        vector <long long int> temp;
        temp.push_back(-1);
        for(i = 0; i < n + 1; i++)
        {
            adjlist.push_back(temp);
        }
    }
    
    void AddEdge(long long int a, long long int b)
    {
        if(adjlist[a].back() == -1)
        {
            adjlist[a].pop_back();
            adjlist[a].push_back(b);
        }
        else
        {
            adjlist[a].push_back(b);
        }
    }
    
    void DFS(long long int* visitedarray, long long int currvertex)
    {
        visitedarray[currvertex] = 1;
        long long int i;
        if(adjlist[currvertex].back() == -1)
        {
            return;
        }
        for(i = 0; i < adjlist[currvertex].size(); i++)
        {
            if(visitedarray[adjlist[currvertex][i]] == 0)
            {
                long long int temp = currvertex;
                currvertex = adjlist[currvertex][i];
                DFS(visitedarray, currvertex);
                currvertex = temp;
            }
        }
    }
};

int main()
{
    Graph graph;
    long long int n, t, i, a;
    cin >> n >> t;
    graph.AddVertices(n);
    for(i = 1; i < n; i++)
    {
        cin >> a;
        graph.AddEdge(i, a + i);
    }
    long long int *visitedarray = new long long int[n + 1];
    for(i = 1; i < n + 1; i++)
    visitedarray[i] = 0;
    long long int currvertex = 1;
    graph.DFS(visitedarray, currvertex);
    if(visitedarray[t] == 1)
    cout << "YES";
    else
    cout << "NO";
}