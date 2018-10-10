#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;
typedef pair <ll, ll> ii;
typedef pair <ll, ii> iii;

const ll N = 1e6 + 5;
const ll INF = 1e9 + 7;

ll aSz, bSz;

string a[N], b[N];

map <string, bool> m;

int main()
{
    //freopen("755B.INP", "r", stdin);
    //freopen("755B.OUT", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> aSz >> bSz;
    if (aSz < bSz) puts("NO"), exit(0);
    if (aSz > bSz) puts("YES"), exit(0);
    for (ll i = 1; i <= aSz; i++) cin >> a[i], m[a[i]]++;
    for (ll i = 1; i <= bSz; i++) cin >> b[i], m[b[i]]++;
    //********************
    ll temp = aSz + bSz - m.size();
    aSz += temp & 1;
    //********************
    puts(aSz > bSz ? "YES" : "NO");
    return 0;
}
