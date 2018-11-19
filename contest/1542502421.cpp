#include <bits/stdc++.h>

using namespace std;

const int MaxN = 5e3 + 15;
const int INF = 1e9;
const int MOD = 1e9 + 7;

int n;

vector <pair<int, int> > v[MaxN];

int d[MaxN][MaxN];
int dp[MaxN][MaxN];
int cnt[MaxN];

vector <int> leafs;

void dfs(int x, int len, int start, int p = 0)
{
    d[start][x] = len;
    for(int i = 0; i < v[x].size(); ++i)
        if(v[x][i].first != p)
            dfs(v[x][i].first, len + v[x][i].second, start, x);
}

int m, M;

bool can(int x, int h, int time, int mx = INF)
{
    int H = h;
    for(int i = 0; i < leafs.size(); ++i)
    {
        int res = 0;
        for(int j = 1; j <= h; ++j)
            if(d[x][leafs[i]] + dp[leafs[i]][H - j] >= time)
                res = j;
            else
                break;

        if(res >= h)
            return true;
        h -= res;
    }
    if(mx != INF)
        return H - h >= mx;
    else
        return h <= 0;
}

void dfs1(int x, int p)
{
    M += cnt[x];
    if(v[x].size() == 1)
    {
        leafs.push_back(x);
        return;
    }
    for(int i = 0; i < v[x].size(); ++i)
        if(v[x][i].first != p)
            dfs1(v[x][i].first, x);
}

int main()
{
//    freopen("input.txt", "r", stdin);
    cin >> n;

    for(int i = 1; i < n; ++i)
    {
        int x, y, z;
        cin >> x >> y >> z;
        v[x].push_back(make_pair(y, z));
        v[y].push_back(make_pair(x, z));
    }

    int s;
    cin >> s;
    cin >> m;
    for(int i = 1; i <= m; ++i)
    {
        int x;
        cin >> x;
        ++cnt[x];
    }

    for(int i = 1; i <= n; ++i)
    {
        if(v[i].size() == 1)
            leafs.push_back(i);
        dfs(i, 0, i);
    }



    for(int i = 0; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
            dp[i][j] = INF;
    }

    for(int h = 1; h <= m; ++h)
    {
        for(int i = 0; i < leafs.size(); ++i)
        {
            int x = leafs[i];
            int l = 0;
            int r = 50 * n * h * 2;
            int ans = r;
            while(l <= r)
            {
                int mid = (l + r) / 2;
                if(can(x, h, mid))
                {
                    ans = mid;
                    l = mid + 1;
                }else
                    r = mid - 1;
            }
            dp[x][h] = ans;
        }
    }

    int ans = INF;

    for(int i = 0; i < v[s].size(); ++i)
    {
        int to = v[s][i].first;
        leafs.clear();
        M = 0;
        dfs1(to, s);
        if(M)
        {
            int l = 0;
            int r = 50 * n * m * 2;
            int res = r;
            while(l <= r)
            {
                int mid = (l + r) / 2;
                if(can(s, m, mid, M))
                {
                    l = mid + 1;
                    res = mid;
                }else
                    r = mid - 1;
            }
            ans = min(res, ans);
        }
    }

    cout << ans << '\n';

    return 0;

}
