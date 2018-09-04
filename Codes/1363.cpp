#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, S, a, K=-1, D, k, t=0, s, g;
    vector <int> A[50];
    cin >> n >> S;
    int V[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        A[0].push_back(a);
    }
    D = n+1;
    while (D - K > 1)
    {
        k = (K + D) / 2;
        t++;
        s = S;
        g = 1;
        for (int i = 0; i < n; i++)
        {
            A[t].push_back(A[0][i] + k*(i+1));
        }
        sort(A[t].begin(),A[t].end());
        for (int i = 0; i < k; i++)
        {
            s -= A[t][i];
            if (s < 0)
            {
                g = 0;
                i += k;
            }
        }
        if (g == 1)
        {
            K = k;
            V[k] = S - s;
        }
        else
        {
            D = k;
        }
    }
    cout << K << " " << V[K];
    return 0;
}
