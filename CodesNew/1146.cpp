#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k, A, B, L, R, t, m, e;
    cin >> n;
    L = 0;
    R = n;
    while (R - L > 1)
    {
        t = (L+R)/2;
        k = n;
        A = 0;
        B = 0;
        while (k > 0)
        {
            e = min(t,k);
            A += e;
            k -= e;
            m = k/10;
            B += m;
            k -= m;
        }
        if (A >= B)
        {
            R = t;
        }
        else
        {
            L = t;
        }
    }
    cout << R;
    return 0;
}
