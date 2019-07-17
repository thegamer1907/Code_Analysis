#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, k;
    cin >> n >> m >> k;
    long long p[m];
    for (int i = 0; i < m; ++i) cin >> p[i];
    long long counter = 0, i = 0, minus = 1, last = -1, lcount = 0, q = 0;
    while (i < m)
    {
        if (((p[i] - minus) / k == last) || last == -1)
        {
            last = (p[i] - minus) / k;
            i += 1;
            lcount += 1;
            q = 0;
        }
        else
        {
            if (lcount > 0) counter += 1;
            minus += lcount;
            lcount = 0;
            last = -1;
        }
    }
    if (lcount > 0) counter += 1;
    cout << counter;
}