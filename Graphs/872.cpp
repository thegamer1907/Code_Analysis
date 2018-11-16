#include <iostream>
using namespace std;
int main()
{
    int n, t, a[30000], vt = 0;
    cin >> n >> t;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (true)
    {
        vt += a[vt];
        if (vt == t - 1)
        {
            cout << "YES";
            return 0;
        }
        if (vt > t - 1)
        {
            cout << "NO";
            return 0;
        }
    }
}