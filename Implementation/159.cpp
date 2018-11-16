#include <bits/stdc++.h>

using namespace std;

#define int long long
#define f first
#define s second

main()
{
    ios::sync_with_stdio(false);
    int n, a, b;
    cin >> n >> a >> b;
    int a1 = (a + 1) / 2;
    int b1 = (b + 1) / 2;
    int r = 1;
    while (a1 != b1)
    {
        a1 = (a1 + 1) / 2;
        b1 = (b1 + 1) / 2;
        r++;
    }
    if (r == log2(n))
    {
        cout << "Final!";
    }
    else
    {
        cout << r;
    }
    return 0;
}
