#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a[100005], x, high, low, mid, ans;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i)
            a[i] += a[i - 1];
    }
    cin >> m;
    while (m--)
    {
        cin >> x;
        high = n - 1;
        low = 0;
        while (high >= low)
        {
            mid = (high + low) / 2;
            if (a[mid] >= x)
                ans = mid, high = mid - 1;
            else
                low = mid + 1;
        }
        cout << ans + 1 << endl;
    }
    return 0;
}
