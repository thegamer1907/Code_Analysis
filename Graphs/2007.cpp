#include <iostream>
#include <vector>

using namespace std;

void dfs(vector <bool> & mas, vector < vector<int> > & graph, vector <bool> & used, int m, int curr, int v, int & ans)
{
    used[v] = true;
    for (auto el : graph[v])
        if (!used[el] && curr + mas[el] <= m)
        {
            if (graph[el].size() != 1)
                dfs(mas, graph, used, m, (mas[el] ? curr + mas[el] : 0), el, ans);
            else
                ans++;
        }
}

int main()
{
    int n = 0, m = 0;
    cin >> n >> m;
    vector <bool> mas(n + 1, false);
    for (int i = 1; i <= n; i++)
    {
        int a = 0;
        cin >> a;
        mas[i] = a;
    }
    vector < vector<int> > graph(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int u = 0, v = 0;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    int ans = 0;
    vector <bool> used(n + 1, false);
    dfs(mas, graph, used, m, mas[1], 1, ans);
    cout << ans;
}