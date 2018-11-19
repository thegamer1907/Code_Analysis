#include <bits/stdc++.h>
using namespace std;

int fre[16], d[4];
vector<int> st;
int n, m;
bool ok;

bool stop(int ss)
{
    if (ss == 0) return false;
    for (int i = 0; i < m; i++) if (d[i] * 2 > ss) return false;
    return true;
}

void try_(int i, int ss)
{
    for (int j = 0; j <= 1; j++)
    {
        if (ok) return;
        if (j)
        {
            for (int k = 0; k < m; k++) d[k] += ((st[i] >> k) & 1);
            if (i < n - 1) try_(i + 1, ss + 1);
            else if (stop(ss + 1))
            {
                ok = true;
                return;
            }
            for (int k = 0; k < m; k++) d[k] -= ((st[i] >> k) & 1);
        }
        else
        {
            if (i < n - 1) try_(i + 1, ss);
            else if (stop(ss))
            {
                ok = true;
                return;
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int x = 0;
        for (int j = 0; j < m; j++)
        {
            int y;
            scanf("%d", &y);
            x |= (y << j);
        }
        if (fre[x] == 0) st.push_back(x);
        fre[x]++;
    }
    n = st.size();
    try_(0, 0);
    if (ok) cout << "YES";
    else cout << "NO";
}
