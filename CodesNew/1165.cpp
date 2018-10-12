#include <iostream>
#include <array>
using namespace std;
const int N = 1e5 + 7;

array<int, N> a;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int mn = a[0];
    for (int i = 1; i < n; ++i)
        mn = min(a[i], mn);
    for (int i = 0; i < n; ++i)
        a[i] -= mn;
    int idx = mn % n;
    int bc = 0;
    while (true)
    {
        if (a[idx] - bc <= 0)
        {
            cout << idx + 1<< endl;
            return 0;
        }
        bc++;
        idx = (idx + 1) % n;
    }
    return 0;
}