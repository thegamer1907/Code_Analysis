#include <bits/stdc++.h>

using namespace std;

int a[100050][4];
int p[4], sj[4], si[100050];
int n, k, u, f, F, m1, m2, ind1, ind2, t, T;

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> a[i][j];
            sj[j] += a[i][j];
            si[i] += a[i][j];
            if (a[i][j] == 1)
                t = 1;
        }
        if (t == 0)
            T = 1;
        t = 0;
    }
    if (T == 0)
    {
        for (int i = 0; i < k; i++)
        {
            if (sj[i] > m1)
            {
                m1 = sj[i];
                ind1 = i;
            }
        }
        m2 = 99999999;
        for (int i = 0; i < n; i++)
        {
            if (si[i] < m2)
            {
                m2 = si[i];
                ind2 = i;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (si[i] == m2)
            {
                if (a[i][ind1] == 0)
                {
                    ind2 = i;
                    break;
                }
            }
        }
        for (int i = 0; i < k; i++)
        {
            if (a[ind2][i] == 0)
            {
                for (int g = 0; g < k; g++)
                {
                    if (a[ind2][g] == 1)
                    {
                        p[u] = g;
                        u++;
                    }
                }
                for (int l = 0; l < n; l++)
                {
                    for (int g = 0; g < u; g++)
                    {
                        if (a[l][p[g]] == 0)
                            f++;
                    }
                    if (f == u)
                    {
                        F = 1;
                        break;
                    }
                    f = 0;
                }
            }
            if (F == 1)
                break;
        }
        if (F == 1)
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "YES";
    return 0;
}
