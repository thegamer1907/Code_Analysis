#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int n, t, ans = 0;
    cin >> n >> t;
    t -= 1;
    vector <int> a(n), used(n, false);
    used[0] = true;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> a[i];
        a[i] += i;
        if (used[i])
        {
            used[a[i]] = true;
            if ((a[i] <= t) && (a[i] > ans))
            {
                ans = a[i];
            }
        }

    }
    (ans == t)? cout << "YES" : cout << "NO";
    return 0;
}
