#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> g[200005];
bool v[200005];
int dis[200005];
int main()
{
    cin >> n >> m;
    for(int i=1;i<=2*max(n,m);++i)
    {
        g[i].push_back(i*2);
        g[i].push_back(i-1);
    }
    queue<int> q;
    q.push(n);
    v[n] = true;
    while(!q.empty())
    {
        int top = q.front();
        q.pop();
        //v[top] = false;
        for(auto &it : g[top])
        {
            if(!v[it])
            {
                q.push(it);
                v[it] = true;
                dis[it] = dis[top] + 1;
            }
        }
    }
    cout << dis[m] << endl;

    return 0;
}
