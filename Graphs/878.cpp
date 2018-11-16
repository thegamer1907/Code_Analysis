/*#include <bits/stdc++.h>

using namespace std;

int a[1234567];

int main()
{
    int n, t;
    cin >> n >> t;
    for(int i=1; i<n; i++) {
        cin >> a[i];
    }
    int x=1;
    while(x<t) {
        x += a[x];
    }
    cout << (x==t? "YES" : "NO") << endl;
    return 0;
}
*/

#include<bits/stdc++.h>

using namespace std;

int n;
vector<int>*graph;

bool bfs(int start, int destination)
{
    int visited[n+1];
    memset(visited, 0, sizeof(visited));

    queue<int>q;

    visited[start]=1;
    q.push(start);

    while(!q.empty()) {
        int u = q.front();
        q.pop();

        for(int v=0; v<graph[u].size(); v++) {
            if(visited[graph[u][v]]==0) {
                visited[graph[u][v]]=1;
                if(graph[u][v]==destination) {
                    return true;
                }
                q.push(graph[u][v]);
            }
        }

    }
    return false;
}

int main()
{
    int t;
    cin >> n >> t;
    graph = new vector<int>[n+1];

    for(int i=1; i<=n-1; i++) {
        int a;
        cin >> a;
        graph[i].push_back(a+i);
    }
    cout << (bfs(1, t)? "YES" : "NO") << endl;
    return 0;
}
