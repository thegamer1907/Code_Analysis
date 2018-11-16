#include <iostream>
#include <vector>
#include <queue>

const int MAX_N = 100000+10;

using namespace std;

bool mark[MAX_N];
vector <int> adj[MAX_N];
int p[MAX_N];
int n;

int dfs(int v)
{
    mark[v] = 1;
    int dis = 0;

    for(int i = 0; i < adj[v].size(); i++)
    {
        int u = adj[v][i];
        if(mark[u] == 0)
            dis = max(dis, dfs(u));
    }
    return dis+1;
}

int now_time;
int t[MAX_N];
bool marked[MAX_N];

int bfs(int v) {
    queue<int> q;
    int dis2 = 0;

    marked[v] = 1;
    q.push(v);
    now_time = 0;
    t[v] = now_time;

    while(q.size()) {
        v = q.front();
        q.pop();

        for(int i = 0; i < adj[v].size(); i++) {
            int u = adj[v][i];

            if (marked[u] == 1)
                continue;

            marked[u] = 1;
            t[u] = now_time;
            q.push(u);
        }
        now_time++;
    }

    dis2 = max(dis2, now_time-1);
    return dis2;

}

int main()
{
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        cin >> p[i];
        if(p[i] == -1)    continue;

        adj[i].push_back(--p[i]);
        adj[p[i]].push_back(i);
    }

    int d1 = 1, d2 = 1;
    for(int i = 0; i < n; i++)
        if(p[i] == -1)
            {
                d1 = max(d1, dfs(i));
                //d2 = max(d2, bfs(i));
            }

    cout << /*"using dfs : " << */d1 << endl ;
    //<<      "using bfs : " << d2;

    return 0;
}
