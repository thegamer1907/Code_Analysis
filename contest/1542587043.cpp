#include <bits/stdc++.h>
#include <ostream>
using namespace std;
template <typename T> void printRange(T &x) { for (auto y : x) cout << y << ' '; cout << endl; }
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<vi> vvi;
typedef vector<ll> vl;
#define getNum(i) scanf("%d", &(i))
#define MOD 1000000007
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define REP(i, n) FOR(i, 0, n)
#define TRACE(x) cout << #x << " = " << x << endl
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define mp make_pair
#define reset(a) memset((a), 0, sizeof((a)))

const double EPS = 1e-11;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
#endif
    IOS
    double h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;

    if (abs(h-12) < EPS) h = 0.0;

    h += m/60.0 + s/3600.0;
    m += s/60.0;
    m /= 5.0;
    s /= 5.0;

    vector<double> vc(5);
    vc[0] = h;
    vc[1] = m;
    vc[2] = s;
    vc[3] = t1;
    vc[4] = t2;
    sort(vc.begin(), vc.end());
    REP(i, 4) {
        if ((abs(vc[i]-t1) < EPS && abs(vc[i+1]-t2) < EPS) || (abs(vc[i+1]-t1) < EPS && abs(vc[i]-t2) < EPS)) {
            cout << "YES" << endl;
            return 0;
        }
    }

    if ((abs(vc[0]-t1) < EPS && abs(vc[4]-t2) < EPS) || (abs(vc[4]-t1) < EPS && abs(vc[0]-t2) < EPS)) {
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;

    return 0;
}