#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int n, k;
bool b[16];

int main()
{
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i)
    {
        int t = 0;
        for (int j = 0; j < k; ++j)
        {
            int x;
            scanf("%d", &x);
            t = t * 2 + x;
        }
        b[t] = true;
    }
    for (int i = 0; i < (1 << k); ++i)
        for (int j = 0; j < (1 << k); ++j)
            if ((i & j) == 0 && b[i] && b[j])
            {
                puts("YES");
                return 0;
            }
    puts("NO");
    return 0;
}
