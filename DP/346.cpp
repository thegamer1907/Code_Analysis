#include <bits/stdc++.h>
using namespace std;

int m, n;

bool bpm(int graph[100][100], int u, int seen[100], int match[100])
{
    int i;
    for(i=0; i<n; i++)
    {
        if(graph[u][i] == 1 && !seen[i])
        {
            seen[i] = 1;
            if(match[i] == -1 || bpm(graph, match[i], seen, match))
            {
                match[i] = u;
                return true;
            }
        }
    }
    return false;
}

int ford(int graph[100][100])
{
    int i, seen[100], match[100], result = 0;
    memset(match, -1, sizeof(match));
    for(i=0; i<m; i++)
    {
        memset(seen, 0, sizeof(seen));
        if(bpm(graph, i, seen, match))
        result++;
    }
    return result;
}

int main()
{
    int a[100], b[100], graph[100][100], i, j;
    cin >> n;
    for(i=0 ;i<n; i++)
    cin >> a[i];
    cin >> m;
    for(i=0; i<m; i++)
    cin >> b[i];
    
    for(i=0; i<m; i++)
    for(j=0; j<n; j++)
    {
        if(b[i] == a[j] - 1 || b[i] == a[j] + 1 || b[i] == a[j])
        {
            graph[i][j] = 1;
        }
        else
        {
            graph[i][j] = 0;
        }
    }
    
    cout << ford(graph);
}