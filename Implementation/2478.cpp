#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, sum = 0, a, b, maximum = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a >> b;
        sum += b - a;
        maximum = max(sum, maximum);
    }
    cout << maximum << '\n';
    return 0;
}