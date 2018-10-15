#include<iostream>

using namespace std;

int main()
{
    int n = 0, m = 0, mx = 0, d = 0;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > mx)
        {
            mx = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        d += (mx - a[i]);
    }
    if (m <= d)
    {
        cout << mx << " ";
    }
    else
    {
        cout << mx + (m - d) / n + ((m - d) % n == 0 ? 0 : 1) << " ";
    }
    cout << mx + m;
}
