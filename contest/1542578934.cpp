#include <bits/stdc++.h>
using namespace std;
const int N = 100050;

int a[N][5];
int c[N], d[5];

int main()
{
    int n, k;
    cin >> n >> k;
    int s = 0, s2 = 0;
    int mx = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= k; j++)
        {
            cin >> a[i][j];
            c[i] += a[i][j];
            d[j] += a[i][j];
            mx = max(mx, d[j]);
        }
        s += (c[i] == 0);
        s2 += (c[i] == 1);
    }
    if(mx == n)
    {
        cout << "NO";
        return 0;
    }
    if(s > 0 || s2 > 0)
    {
        cout << "YES";
        return 0;
    }
    if(k < 4)
    {
        cout << "NO";
        return 0;
    }
    map<string, int> mp;
    for(int i = 1; i <= n; i++)
    {
        string str = "";
        for(int j = 1; j <= k; j++)
        {
            str += char('0' + a[i][j]);
        }
        mp[str]++;
    }
    if((mp["1100"] > 0 && mp["0011"] > 0) || (mp["1010"] > 0 && mp["0101"] > 0) || (mp["1001"] > 0 && mp["0110"] > 0))
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}
