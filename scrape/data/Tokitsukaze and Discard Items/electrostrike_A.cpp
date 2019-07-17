#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, m, k, a[100100], res = 0, cur, tmp, p = 1;
main()
{
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++)
        cin >> a[i];
    int i = 0;
    while (i < m)
    {
        while (a[i] <= p * k + cur && i < m)
        {
            tmp++;
            i++;
        }
        if (tmp == 0)
            p = max((a[i] - cur) / k, p + 1);
        else
        {
            res++;
            cur += tmp;
            tmp = 0;
        }
    }
    cout << res;
}