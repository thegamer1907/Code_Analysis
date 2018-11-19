#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
#include <set>
#include <map>
#include <queue>
#include <cassert>
#define PB push_back
#define MP make_pair
#define sz(v) (ll((v).size()))
#define forn(i,n) for(ll i = 0; i < (n); ++i)
#define forv(i,v) forn(i,sz(v))
#define fors(i,s) for(auto i=(s).begin();i!=(s).end();++i)
#define all(v) (v).begin(), (v).end()

using namespace std;

typedef long long ll;
typedef pair<ll, ll> pii;
typedef vector<ll> vi;
typedef vector<vi> vvi;

int b[256], e[256];

void yes() {
            cout << "YES" << endl; exit(0);
}

bool within(double t1, double t2, double p) {
    if (t1 > t2) {
        return (t1 <= p && p <= 1.0001) || (0 <= p && p <= t2);
    }
    return (t1 <= p && p <= t2);
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int h, m, s;
    cin >> h >> m >> s;
    h %= 12;
    double p1, p2; cin >> p1 >> p2;
    p1 /= 12, p2 /= 12;
    vector<double> hands;
    hands.PB( ( h + 0.5) / 12.0);
    hands.PB( ( m + 0.5 ) / 60.0);
    hands.PB( s / 60.0);

    sort(all(hands));
    for (auto h : hands) cerr << h << endl;
    for (int i = 0; i < 3; i++) {
        if (within(hands[i], hands[ (i + 1) % 3], p1)
          && within(hands[i], hands[(i+1)%3], p2)) {
            cout << "YES" << endl; exit(0);
        }
    }
    cout << "NO" << endl;
}
