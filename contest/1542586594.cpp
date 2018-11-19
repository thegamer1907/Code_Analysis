#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 7;
int num[N];

int main()
{
    ios::sync_with_stdio(false);
    
    int n, m;
    cin >> n >> m;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<m; j++)
        {
            int x; cin >> x;
            num[i] += (x << j);
        }
    }
    sort(num, num + n);
    n = unique(num, num + n) - num;
    for (int i=1; i < 1 << n; i++)
    {
        int cnt[5] = {0};
        for (int j=0; j<n; j++)
            if ((i >> j) & 1)
            {
                for (int k=0; k<m; k++)
                    if ((num[j] >> k) & 1)
                        cnt[k]++;
            }
        bool ok = true;
        int all = __builtin_popcount(i);
        for (int k=0; k<m; k++)
            if (cnt[k] * 2 > all)
                ok = false;
        if (ok)
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
