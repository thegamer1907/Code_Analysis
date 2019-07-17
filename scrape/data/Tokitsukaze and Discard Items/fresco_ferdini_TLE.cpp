#include <bits/stdc++.h>
using namespace std;

//g++ -g -o yourexe yourfile.cpp
//./yourexe < yourinput.in > youroutput.out

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#define M 1000000007

#define ll long long
#define ld long double
#define vi vector<ll>
#define pi pair<ll, ll>
#define vii vector<pi>
#define vvi vector<vi>
#define pb push_back
#define endl "\n"

#define REP(i, s, e) for (ll i = s; i < e; i++)
#define RREP(i, s, e) for (ll i = s; i > e; i--)

#define all(v) v.begin(), v.end()
#define part(v, s, e) v.begin() + s, v.begin() + e
#define print(v) for (auto i: v) cout << i << " ";

int main() {
    fast;
    ll n, m, k;
    cin >> n >> m >> k;
    vi p(m);
    REP(i, 0, m)
        cin >> p[i];
    ll a = 0, t = k, ps, pps = -1;
    while(pps < m-1) {
        ps = upper_bound(all(p), t) - p.begin() - 1;
        if (ps == pps) {
            t += k;
            continue;
        }
        t += ps - pps;
        a++;
        pps = ps;
    }
    cout << a << endl;
    return 0;
}