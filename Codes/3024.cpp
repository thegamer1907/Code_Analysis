#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
vector<ll> z;
vector<ll> z1;

void zf(string s)
{
    ll n = s.size();
    for (ll i = 1, l = 0, r = 0; i < n; i++)
    {
        if (i <= r)
        {
            z[i] = min(r - i + 1, z[i - l]);
        }
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];

        if (i + z[i] - 1 > r)
        {
            l = i;
            r = i + z[i] - 1;
        }
    }
}

int main()
{
    string s;
    cin >> s;
    z.resize(s.size(), 0);
    zf(s);
    z1 = z;
    map<ll, ll> A;
    for (int i = 0; i < z.size(); i++)
    {
        A[z[i]]++;
    }
    sort(z1.begin(), z1.end());
    ll r = s.size() - 1;
    ll ind = -1;
    ll len = 0;
    for (; r >= 0; r--)
    {
        if (z[r] > len && z[r] + r == s.size())
        {
            ll kol = z1.end() - lower_bound(z1.begin(), z1.end(), z[r]);
            if (kol > 1)
            {
                len = z[r];
                ind = r;
            }

        }
    }
    if (ind == -1)
    {
        cout << "Just a legend";
        return 0;
    }
    cout << s.substr(ind, len);
}
