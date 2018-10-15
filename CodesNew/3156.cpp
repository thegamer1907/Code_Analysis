#include<bits/stdc++.h>

using namespace std;

const int maxN = 3e5 + 7;
int n, k, a[maxN], sum[maxN], pos;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = sum[i - 1];
        if (a[i] == 0)  sum[i]++;
    }
    int l = 0, r = n + 1;
    while (r - l > 1)
    {
        int mid = (r + l) / 2;
        bool kt = false;
        for (int i = 1; i <= n - mid + 1; i++)
        {
            int check = sum[i + mid - 1] - sum[i - 1];
            if (check <= k) kt = true, pos = i;
        }
        if (kt == true) l = mid;
        else    r = mid;
    }
    cout << l << "\n";
    for (int i = pos; i <= pos + l - 1; i++)    a[i] = 1;
    for (int i = 1; i <= n; i++)    cout << a[i] << " ";
    return 0;
}
