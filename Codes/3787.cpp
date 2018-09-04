#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    string s;
    cin >> s;
    ll nb, ns, nc;
    cin >> nb >> ns >> nc;
    ll pb, ps, pc;
    cin >> pb >> ps >> pc;
    ll r;
    cin >> r;

    ll kb = 0, ks = 0, kc = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
            kb++;
        if (s[i] == 'S')
            ks++;
        if (s[i] == 'C')
            kc++;
    }

    ll L = 0;
    ll R = 1e13;

    while (R - L > 1)
    {
        ll m = (L + R) / 2;
        ll kolB = m * kb;
        ll kolS = m * ks;
        ll kolC = m * kc;

        ll doB = kolB - nb;
        ll doS = kolS - ns;
        ll doC = kolC - nc;

        ll sum = 0;
        if (doB >= 0)
            sum += doB * pb;
        if (doC >= 0)
            sum += doC * pc;
        if (doS >= 0)
            sum += doS * ps;
        if (sum <= r)
            L = m;
        else
            R = m;
    }
    cout << L;
}
