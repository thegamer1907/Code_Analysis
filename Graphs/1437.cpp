#include <bits/stdc++.h>
using namespace std;
#define st first
#define nd second
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define ll long long
int main()
{
    int n, destination;
    cin >> n >> destination;
    int i, t;
    vector<int> a;
    a.pb(0);
    for (i = 0; i < n - 1; i++)
    {
        cin >> t;
        a.pb(t);
    }
    if (destination == 1)
    {
        cout << "YES";
        return 0;
    }
    int cur = 1;
    bool canGo = true, ans = false;
    do
    {
        cur += a[cur];
        if (cur == destination)
        {
            ans = true;
            break;
        }
        if (cur > destination)
        {
            break;
        }
    } while (canGo);
    if (ans)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
