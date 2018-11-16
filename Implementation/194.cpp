#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b, res = 0;
    cin >> n >> a >> b;
    while (n > 1 && a != b)
    {
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        ++res;
        n /= 2;
    }
    if (n > 1)
    {
        cout << res << '\n';
    }
    else
    {
        cout << "Final!\n";
    }
    return 0;
}
