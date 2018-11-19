#include <bits/stdc++.h>
#define f first
#define s second
#define p 3.14159265
#define q for (int i = 0; i < n; i++) for (int j = 0; j < m; j++)
#define IOS {ios :: sync_with_stdio(false); cin.tie(0); }
#define pb push_back
#define ll long long
const int tinf = (int)1e9 + 7;
const ll inf = (ll)1e18 + 7;
using namespace std;
ll gcd (ll a, ll b)
{
    return b ? gcd (b, a % b) : a;
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    IOS
    ll h, m, s, t1, t2, a[140000] = {}, g = 0;
    cin >> h >> m >> s >> t1 >> t2;
    t1 *= 5;
    t2 *= 5;
    a[h*5] ++;
    a[m] ++;
    a[s] ++;
    if (t1 <= t2)
    {
        ll e = 0;
        g = a[t2];
        a[t2] = 0;
        for (int i = t1; i <= t2; i++)
            if (a[i]) e = 1;
        a[t2] = g;
        if (!e)
        {
            cout << "YES";
            return 0;
        }
        e = 0;
        for (int i = t2; i <= 60; i++)
            if (a[i]) e = 1;
        g = a[t1];
        a[t1] = 0;
        for (int i = 0; i <= t1; i++)
            if (a[i]) e = 1;
        a[t1] = g;
        if (!e)
        {
            cout << "YES";
            return 0;
        }
        cout << "NO";
    } else
    {
        ll e = 0;
        g = a[t1];
        a[t1] = 0;
        for (int i = t2; i <= t1; i++)
            if (a[i]) e = 1;
        a[t1] = g;
        if (!e)
        {
            cout << "YES";
            return 0;
        }
        e = 0;
        for (int i = t1; i <= 60; i++)
            if (a[i]) e = 1;
        g = a[t2];
        a[t2] = 0;
        for (int i = 0; i <= t2; i++)
            if (a[i]) e = 1;
        a[t2] = g;
        if (!e)
        {
            cout << "YES";
            return 0;
        }
        cout << "NO";
    }






}
