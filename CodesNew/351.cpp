#include <bits/stdc++.h>

using namespace std;

int n, t;
int a[100005], f[100005];

int main()
{
    cin >> n >> t;
    for (int i = 1; i <= n; i++) cin >> a[i];
    //sort(a + 1, a + n + 1);
    memset(f, 0, 100005);
    int pos = 0, res = 0;
    for (int i = 1; i <= n; i++) f[i] = f[i - 1] + a[i];
    for (int i = 1; i <= n; i++)
    {
        while (f[i] - f[pos] > t) pos++;
        res = max(res, i - pos + 1);
    }
    cout << res - 1;
    //for (int i = 1; i <= n; i++) cout << f[i] << " ";
    return 0;
}
