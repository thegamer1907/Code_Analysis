#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100001];
bool visited[100001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, d, num;
    cin >> n >> d;

    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        adj[i].push_back(i+num);
    }

    // bfs

    queue<int> bfsq;
    bfsq.push(1);

    while (!bfsq.empty())
    {
        int current = bfsq.front();
        bfsq.pop();

        for (auto ad : adj[current])
        {
            if (!visited[ad])
            {
                visited[ad] = true;
                bfsq.push(ad);
            }
            visited[current] = true;
        }
    }

    cout << (visited[d] ? "YES" : "NO") << endl;
}