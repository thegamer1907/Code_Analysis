#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define MOD 1000000007
#define EPS 1e-6
#define PI 3.14159265

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll nb, ns, nc;
    ll pb, ps, pc;
    ll neb = 0, nes = 0, nec = 0;
    ll ans = 0;
    ll price = 0;
    ll r;
    string s;
    cin >> s;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> r;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'B')
            neb++, price += pb;
        else if(s[i] == 'S')
            nes++, price += ps;
        else
            nec++, price += pc;
    }
    while((nb > 0 && neb) || (ns > 0 && nes) || (nc > 0 && nec))
    {
        if(nb < neb)
        {
            r -= (neb - nb) * pb;
            nb = neb;
        }
        if(ns < nes)
        {
            r -= (nes - ns) * ps;
            ns = nes;
        }
        if(nc < nec)
        {
            r -= (nec - nc) * pc;
            nc = nec;
        }
        if(r >= 0)
        {
            ans++;
            nb -= neb;
            ns -= nes;
            nc -= nec;
        }
        else
        {
            break;
        }
    }
    if(r >= 0)
        ans += r / price;
    cout << ans;
    return 0;
}
