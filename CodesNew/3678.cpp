#include <bits/stdc++.h>

using namespace std;

int const h = 100000;

int main()
{
    int n, m, a[h], mop = -9999999999, sum = 0;
    cin >> n >> m;
    int b = m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (mop < a[i])
            mop = a[i];
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        if (a[j] > a[i])
        swap(a[j], a[i]);
    for (int i = 0; i < n - 1; i++)
    {
        sum += a[n - 1] - a[i];
    }
    if (n == 1)
        cout << mop + b << " " << mop + b;
    else{
            if (sum > m)
                    cout << a[n - 1] << " " << mop + b;
            else
            {

                    m = m - sum;
                    if (m % n == 0)
                    cout << m / n + a[n - 1] << " " << mop + b;
                    else
                       cout << m / n + 1 + a[n - 1] << " " << mop + b;
            }
    }
}
