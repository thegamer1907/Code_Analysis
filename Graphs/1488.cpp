#include <bits/stdc++.h>

using namespace std;

int n, target;

vector<int> *a;
bool *visited;

void dfs(int target)
{
    if(visited[target] == true)
        return;
    visited[target] = true;
    for(int i = 0; i < a[target].size(); i++)
        dfs(a[target][i]);
}

int main()
{
    cin >> n >> target;
    a = new vector<int>[n+5];
    visited = new bool[n+5];
    for(int i = 0; i < n+5; i++)
        visited[i] = false;
    for(int i = 1;i <= n-1; i++)
    {
        int in;
        cin >> in;
        a[i].push_back(i + in);
    }
    dfs(1);
    if(visited[target])cout << "YES" << endl;else cout << "NO" << endl;

    return 0;
}
