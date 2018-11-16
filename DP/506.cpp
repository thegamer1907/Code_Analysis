#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    vector<int> boys;
    vector<int> girls;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        boys.push_back(x);
    }
    cin >> m;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        girls.push_back(x);
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int p1 = 0, p2 = 0;

    int ans = 0;

    while (true)
    {
        if (p1 <= n and p2 <= m and abs(boys[p1] - girls[p2]) <= 1)
        {
            ans++;
            p1++;
            p2++;
        }
        else if (boys[p1] > girls[p2] and p2 != m)
        {
            p2++;
        }
        else if (boys[p1] < girls[p2] and p1 != n)
        {
            p1++;
        }
        else
        {
            break;
        }
        if (p1 == n and p2 == m)
            break;
    }
    cout << ans << endl;
}