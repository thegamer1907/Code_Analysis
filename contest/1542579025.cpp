#include<bits/stdc++.h>
using namespace std;
int n, k, p, r, t, s, q, A[5], P[5], C[16];
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        q = 0;
        for (int j = 1; j <= k; j++)
        {
            cin >> A[j];
            if (A[j] == 1)
            {
                q = 1;
            }
            else
            {
                P[j] ++;
            }
        }
        if (q == 0)
        {
            cout << "YES";
            return (0);
        }
        C[A[4] * 8 + A[3] * 4 + A[2] * 2 + A[1]] ++;
    }
    for (int i = 1; i <= k; i++)
    {
        if (P[i] == 0)
        {
            cout << "NO";
            return (0);
        }
    }
    if (k == 2)
    {
        cout << "YES";
        return (0);
    }
    if (k == 3)
    {
        if ((C[1] > 0 && (C[2] > 0 || C[4] > 0 || C[6] > 0)) || (C[2] > 0 && (C[1] > 0 || C[4] > 0 || C[5] > 0)))
        {
            cout << "YES";
            return (0);
        }
        if ((C[4] > 0 && C[3] > 0))
        {
            cout << "YES";
            return (0);
        }
        cout << "NO";
        return (0);
    }
    if (C[1] > 0 && (C[2] > 0 || C[4] > 0 || C[6] > 0 || C[8] > 0 || C[10] > 0 || C[12] > 0 || C[14] > 0))
    {
        cout << "YES";
        return (0);
    }
    if (C[1] > 0)
    {
        cout << "NO";
        return (0);
    }
    if (C[2] > 0 && (C[4] > 0 || C[5] > 0 || C[8] > 0 || C[9] > 0 || C[12] > 0 || C[13] > 0))
    {
        cout << "YES";
        return (0);
    }
    if (C[2] > 0)
    {
        cout << "NO";
        return (0);
    }
    if (C[4] > 0 && (C[3] > 0 || C[8] > 0 || C[9] > 0 || C[10] > 0 || C[11] > 0))
    {
        cout << "YES";
        return (0);
    }
    if (C[4] > 0)
    {
        cout << "NO";
        return (0);
    }
    if (C[8] > 0 && (C[3] > 0 || C[5] > 0 || C[6] > 0 || C[7] > 0))
    {
        cout << "YES";
        return (0);
    }
    if (C[8] > 0)
    {
        cout << "NO";
        return (0);
    }
    if ((C[3] > 0 && C[12]) || (C[5] > 0 && C[10] > 0) || (C[6] > 0 && C[9] > 0))
    {
        cout << "YES";
        return (0);
    }
    cout << "NO";
    return (0);
}
