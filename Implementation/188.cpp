#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

int main()
{
#ifdef POSPELOV
    freopen("in", "r", stdin);
#endif
    ios_base::sync_with_stdio(0);
    int n, a, b;
    cin >> n >> a >> b;
    a--, b--;
    int t = n;
    int cnt = 0;
    while (t)
    {
        cnt++;
        t /= 2;

    }

    for (int i = n / 2; i >= 1; i /= 2, cnt--)
    {
        if (a / i != b / i)
        {
            if (i == n / 2)
                cout << "Final!";
            else
                cout << cnt - 1;
            return 0;
        }
    }


    return 0;
}
