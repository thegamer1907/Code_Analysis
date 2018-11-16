#include <iostream>
using namespace std;

int main()
{
    int n, a[100], k, kq = 0, L, m, R;
    cin >> n >> a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> k;
        a[i] = a[i - 1];
        if (k == 1) a[i]++;
    }
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
        {
            if (j - 1 >= 0)
            {
                L = a[j - 1];
                m = (i - j + 1) - a[i] + a[j - 1];
            }
            else
            {
                L = 0;
                m = (i - j + 1) - a[i];
            }
            R = a[n - 1] - a[i];
            kq = max(kq, L + m + R);
            //cout << i << ' ' << j << ' ' << L << ' ' << m << ' ' << R << endl;
        }
    cout << kq << endl;
    return 0;
}
