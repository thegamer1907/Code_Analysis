#include <bits/stdc++.h>

using namespace std;
const int max_n = 1e4;
int a[max_n], b[max_n];
int main()
{
    int n, m, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(b, b + m);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        while (a[i] - b[cnt] > 1 && cnt < m)
            cnt++;
        if (abs(a[i] - b[cnt]) <= 1 && cnt < m)
            ans++, cnt++;
    }
    cout << ans << endl;
    return 0;
}
