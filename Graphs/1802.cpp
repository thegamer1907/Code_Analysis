#include <bits/stdc++.h>

using namespace std;

int n, m;
vector <int> grl, boy, mt;
vector <bool> used;

bool dfs(int v)
{
    if (used[v])
        return 0;
    used[v] = 1;
    for (int to = 0; to < m; to++)
    {
        if (abs(grl[to] - boy[v]) > 1)
            continue;
        if (mt[to] == -1 || dfs(mt[to]))
        {
            mt[to] = v;
            return 1;
        }
    }
    return 0;
}

int main()
{
    cin >> n;
    boy.resize(n);
    for (int i = 0; i < n; i++)
        cin >> boy[i];

    cin >> m;
    grl.resize(m);
    for (int i = 0; i < m; i++)
        cin >> grl[i];

    mt.resize(m, -1);
    used.resize(n);

    for (int i = 0; i < n; i++)
    {
        fill(used.begin(), used.end(), 0);
        dfs(i);
    }

    int ans = 0;
    for (int i = 0; i < m; i++)
        if (mt[i] >= 0)
            ans++;
    cout << ans;
    return 0;
}
