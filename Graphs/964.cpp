#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int n, t, ans = 0, k;
    cin >> n >> t;
    t -= 1;
    vector <bool> used(n, false);
    used[0] = true;
    for (int i = 0; i < n - 1; ++i)
    {
        cin >> k;
        k += i;
        if (used[i])
        {
            used[k] = true;
            if ((k <= t) && (k > ans))
            {
                ans = k;
            }
        }

    }
    (ans == t)? cout << "YES" : cout << "NO";
    return 0;
}
