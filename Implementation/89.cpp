#include<bits/stdc++.h>
#define int long long
#define f first
#define s second

using namespace std;

signed main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 1;
    while ((a + 1) / 2 != (b + 1) / 2)
    {
        a = (a + 1) / 2;
        b = (b + 1) / 2;
        ++ans;
    }
    if (pow(2, ans) == n)
        cout << "Final!" << endl;
    else
        cout << ans << endl;
}
