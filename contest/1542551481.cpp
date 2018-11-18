#include <bits/stdc++.h>

#define F first
#define S second
#define ll long long
#define p_b push_back
#define m_p make_pair
#define pii pair <int, int>

using namespace std;

const int  N = 1e5 + 5, INF = 1e9 + 7;

int i, j, n, m, k, ans, x, y, z;
int d[N], p[N];
int a[N][7];
vector <int> v;
bool u[N];
string st;
map <int, int> mp;



int main()
{
    //freopen("path_easy.in", "r", stdin);
    //freopen("path_easy.out", "w", stdout);

    //ios_base::sync_with_stdio(0);

    cin >> n >> m;
    for (i = 1; i <= n; i++)
    {
        ans = 0;
        for (j = 0; j < m; j++)
        {
            cin >> x;
            if (x) ans = ans + (1 << j);
        }
        mp[ans]++;
    }
    if (mp[0]) {
        cout << "YES";
        return 0;
    }
    for (i = 1; i < (1 << m); i++)
    {
        if (!mp[i]) continue;
        for (j = 1; j < (1 << m); j++)
        {
            if (!mp[j]) continue;
            bool fl = false;
            for (int t = 0; t < m; t++)
            {
                x = i & (1 << t);
                y = j & (1 << t);
                if (x && y) fl = true;
            }
            if (!fl) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";

}

