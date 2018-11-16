#include <iostream>
#include <vector>
#include <queue>
#define maxn 30000

using namespace std;

vector<pair<int, int> > E[maxn];
int d[maxn];
int vis[maxn];

void init()
{
    for(int i = 0; i < maxn; i++)
    {
        E[i].clear();
        d[i] = 1e9;
        vis[i] = 0;
    }

}

int main()
{
    init();
    int n = 0;
    int endId = 0;
    cin >> n >> endId;
    vector<int> ai;
    int tmp;
    for(int i = 0; i < n - 1; i++)
    {
        cin >> tmp;
        E[i + 1].push_back(make_pair(i + 1 + tmp, 1));
    }

    queue<int> Q;
    Q.push(1);vis[1] = 1;d[1] = 0;
    while(!Q.empty())
    {
        int now = Q.front();
        Q.pop();
        vis[now] = 0;
        for(int i = 0; i < E[now].size(); i++)
        {
            int v = E[now][i].first;
            if(d[v] > d[now] + E[now][i].second)
            {
                d[v] = d[now] + E[now][i].second;
                if(vis[v] == 1)
                    continue;
                vis[v] = 1;
                Q.push(v);
            }
        }

    }
    if(d[endId] == 1e9)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}
