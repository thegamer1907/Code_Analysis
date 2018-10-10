#include <bits/stdc++.h>

#define F first
#define S second
#define ll long long
#define p_b push_back
#define m_p make_pair

using namespace std;

const int  N = 1e4 + 5, INF = 1e9 + 7;

int d[N], ans, k;
vector <int> v;
bool u[N];
map <int, int> mp1, mp2;




int main()
{
    //freopen("bestspot.in", "r", stdin);
    //freopen("bestspot.out", "w", stdout);

    string s;
    ll nb, ns, nc, pb, ps, pc, i1 = 0, i2 = 0, i3 = 0;
    ll c;

    cin >> s;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> c;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B') i1++;
         else if (s[i] == 'S') i2++;
          else i3++;
    }
    ll ans = 0;
    ll l = 0, r = 1e13;
    while (r - l > 1)
    {
        ll t = (l + r) / 2;
        ll p = max(1LL * 0, (i1 * t - nb) * pb) + max(1LL * 0, (i2 * t - ns) * ps) + max(1LL * 0, (i3 * t - nc) * pc);
        if (p > c) r = t;
         else l = t;
    }
    cout << l;
}
