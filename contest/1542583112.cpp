#include <bits/stdc++.h>
using namespace std;
void ok()
{
    puts("YES");
    exit(0);
}
int n, k, c[100];

int read()
{
    int res = 0;
    for (int i = 0; i < k; i++)
    {
        int x;
        scanf("%d", &x);
        if (x)
            res = res | (1 << i);
    }
    return res;
}
int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        c[read()] = 1;
    for (int i = 0; i < (1 << k); i++)
    {
        if (!c[i])
            continue;
        for (int j = 0; j < (1 << k); j++)
            if (c[j])
            {
                if ((i & j) == 0)
                    ok();
            }
    }
    puts("NO");
    return 0;
}