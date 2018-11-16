#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, k, r, o, z, max, min;
    cin >> n >> a >> b;
    if (n == 2)
    {
        cout << "Final!";
    }
    else
    {
        k = 2; r = n; o = 0;
        while (r != 1)
        {
            r = r / 2;
            o++;
        }
        r = 0;
        z = n;
        max = std::max(a, b);
        min = std::min(a, b);
        while (k <= n)
        {
            z = z / 2;
            if (min - z > 0 and max - z > 0)
            {
                min = min - z;
                max = max - z;
            }
            if (min <= n / k and max > n / k)
            {
                if (r == 0)
                {
                    cout << "Final!";
                }
                else
                {
                    cout << o - r;
                }
                break;
            }
            else
            {
                k = 2 * k;
                r++;
            }
        }
    }
    return 0;
}

