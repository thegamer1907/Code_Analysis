#include <bits/stdc++.h>
using namespace std;
int a[101], b[101];
int sum[101];
int n;
int main()
{
    int i;
    cin >> n;
    int ans = 0;
    int cnt = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = (a[i] == 0) ? 1 : -1;
        if (a[i] == 1)
            cnt++;
        sum[i] += sum[i - 1] + b[i];
        ans = max(ans, sum[i]);
        if (sum[i] < 0)
            sum[i] = 0;
    }
    if (ans == 0)
        ans = --cnt;
    else
        ans += cnt;
    cout << ans;
    return 0;
}
