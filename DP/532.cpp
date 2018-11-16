#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    ios_base::sync_with_stdio(0);
    ll t = 1;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        vector<int> v(n);
        for (int i = 0; i < n - 1; i++)
        {
            v[i + 1] = (s[i] == s[i + 1]) + v[i];
        }
        ll m;
        cin >> m;
        ll l, r;
        while(m--)
        {
            cin >> l >> r;
            cout << v[--r] - v[--l] << endl;
        }
    }
    return 0;
}
