#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h, a, S;
    cin >> n >> h;
    S = n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a > h)
        {
            S++;
        }
    }
    cout << S;
    return 0;
}
