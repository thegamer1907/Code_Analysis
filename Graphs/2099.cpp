#include <bits/stdc++.h>

using namespace std;
const int MAX = 20005;
vector<int> v[MAX];
int dist[MAX];

int main()
{
    int n,m;
    cin >> n >> m;
    v[1].push_back(2);
    for (int i = 2; i<MAX; i++)
    {
        v[i].push_back(2*i);
        v[i].push_back(i-1);
    }
    queue<int> q;
    q.push(n);
    dist[n] = 1;
    while (!q.empty())
    {
        int now = q.front();
        q.pop();
        for (auto it: v[now])
            if (it<MAX && !dist[it])
            {
                dist[it] = 1+dist[now];
                q.push(it);
            }
    }
    cout << dist[m]-1;
}
