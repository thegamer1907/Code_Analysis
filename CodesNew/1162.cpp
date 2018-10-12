//In The Name Of God
#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<string> vs;
typedef pair<int, int> ii;
typedef pair<int, ii> iii;
typedef pair<double, double> dd;
typedef pair<dd, double> ddd;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<dd> vdd;
typedef vector<double> vd;
typedef vector<vd> vvd;
typedef vector<vvi> vvvi;
typedef vector<vvvi> vvvvi;
typedef vector<ii> vii;
typedef vector<iii> viii;
typedef vector<vii> vvii;
typedef vector<vvii> vvvii;
typedef vector<vector<viii> > vvviii;
typedef vector<vector<iii> > vviii;
typedef set<int> si;
typedef vector<si> vsi;

#define forn(i, n) for (ll i = 0; i < n; i++)
#define inf 1000000000
#define eps 1e-9
#define pi acos(-1.0)
#define F first
#define S second

const int N = 1e6 + 10;

int main() {
    ios::sync_with_stdio(false);
    int n, mn = inf + 10; cin >> n;
    vi al(n);
    for(auto &e: al) cin >> e, mn = min(mn, e);
    for(auto &e: al) e -= mn;
    int cur = mn % n, mi = 0;
    while(al[cur] + mi > 0) {
        cur = (cur + 1) % n;
        mi--;
    }

    cout << cur + 1 << endl;


    return 0;
}
