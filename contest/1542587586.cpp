#include <bits/stdc++.h>

using namespace std;

const int MaxN = 1e5 + 15;
const int INF = 1e9;
const int MOD = 1e9 + 7;

int n, k;

bool used[MaxN];

int main()
{
    cin >> n >> k;
    for(int i = 1; i <= n; ++i)
    {
        int cur = 0;
        for(int j = 0; j < k; ++j)
        {
            int x;
            cin >> x;
            if(x)
                cur += (1 << j);
        }
        if(!cur)
        {
            cout << "YES\n";
            return 0;
        }
        for(int mask = 0; mask < (1 << k); ++mask)
            if(used[mask] && !(mask & cur))
            {
                cout << "YES\n";
                return 0;
            }
        used[cur] = 1;
    }
    cout << "NO\n";
    return 0;

}
