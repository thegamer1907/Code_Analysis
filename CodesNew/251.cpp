#include <iostream>

using namespace std;

const int MAX = 100005;

int n, t;
int v[MAX];

int main()
{
    cin >> n >> t;
    int i;
    for (i = 1; i <= n; ++i)
        cin >> v[i];
    int sc = 0, j = 1, lmax = 0;
    for (i = 1; i <= n; ++i)
    {
        sc += v[i];
        while (j <= i && sc > t)
        {
            sc -= v[j];
            j++;
        }
        if (i - j + 1 > lmax)
            lmax = i - j + 1;
    }
    cout << lmax << '\n';
    return 0;
}
