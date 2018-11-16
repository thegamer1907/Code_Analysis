#include <bits/stdc++.h>
using namespace std;
vector <int> v[3000001];
set <int> p;
bool visited[3000001]={false};
void dfs(int s)
{
    if(visited[s])
        return;
    visited[s]=true;
    for(auto u : (v[s]))
    {
        p.insert(u);
        dfs(u);
    }
}

int main()
{
    int n, t, x;
    cin >> n >> t;
    for(int i=1; i<n; i++)
    {
        cin >> x;
        v[i].push_back(x+i);
    }
    dfs(1);
    if(p.find(t)!=p.end())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
