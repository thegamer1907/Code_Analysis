#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 1;

int n, k;
int b[17];

int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        int tmp = 0;
        for (int j = 1; j <= k; ++j)
        {
        cin >> x;
        tmp += x*(1 << (j - 1));
        }
        b[tmp] = 1;
    }
    for (int i = 0; i < 17; ++i)
        for (int j = 0; j < 17; ++j)
            if (b[i]*b[j] == 1 && ((i & j) == 0))
    {
            cout << "YES";
            return 0;
    }
    cout << "NO";
}
