// qdd on Jun 26, 2018

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e5 + 7;

int a[MAXN];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    int t = *min_element(a, a + n);
    int p = t - (t % n);
    for (int i = 0; i < n; i++) a[i] -= p;
    for (int i = 0; i < 2 * n; i++)
    {
        if (a[i % n] - i <= 0) return printf("%d\n", i % n + 1), 0;
    }
    return 0;
}