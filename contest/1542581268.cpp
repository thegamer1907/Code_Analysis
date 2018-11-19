#include <bits/stdc++.h>
using namespace std;

#define MAXN 100010
#define X first
#define Y second

typedef long long ll;

int a[MAXN], c[20];
int b[4];

int main()
{
    //freopen("input", "r", stdin);
    //freopen("output", "w", stdout);

    int n, k;
    cin >> n >> k;
    
    for (int i = 0; i < n; ++i)
    {
        int x;
        for (int j = 0; j < k; ++j)
        {
            scanf("%d", &x);
            a[i] = (a[i] << 1) | x;
        }
        ++c[a[i]];
        //cout << a[i] << endl;
    }
    bool flag = false;
    if (c[0]) flag = true;
    for (int mask = 1; mask < (1 << (1 << k)); ++mask)
    {
        bool ff = true;
        for (int i = 0; i < (1 << k); ++i)
            if ((mask & (1 << i)) && !c[i])
                ff = false;
        if (!ff) continue;
        int cnt = 0;
        memset(b, 0, sizeof(b));
        for (int i = 0; i < (1 << k); ++i)
        {
            if (mask & (1 << i))
            {
               if (!c[i]) continue;
               ++cnt;
               for (int j = 0; j < k; ++j)
                    if (i & (1 << j))
                        ++b[j];
            }
        }
        bool f = true;
        for (int j = 0; j < k; ++j)
            if (b[j] > cnt / 2)
                f = false;
        if (f) flag = true;
    }
    puts(flag? "YES":"NO");
    return 0;
}