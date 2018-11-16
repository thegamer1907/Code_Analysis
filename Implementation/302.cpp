#include<bits/stdc++.h>
#define int int64_t
using namespace std;

int INF = 1000000000000000000;
signed main()
{
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    a += n - 1;
    b += n - 1;
    int ans = 0;
    while (a != b)
    {
        a /= 2;
        b /= 2;
        ans++;
    }
    if (a == 1)
    {
        cout << "Final!";
    }
    else
    {
        cout << ans << endl;
    }
}
