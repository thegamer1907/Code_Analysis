#include <iostream>
#include <cstdio>
#include <cassert>
#include <climits>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <unordered_map>
#include <algorithm>
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

int main() {
    // cin input optimizations
    ios::sync_with_stdio(0); cin.tie(0);
    int n, q;
    cin >> n;
    vi x(n);
    forn(i, n) cin >> x[i];
    sort(x.begin(), x.end());
    cin >> q;
    forn(i, q) {
        int m; cin >> m;
        int amt = upper_bound(x.begin(), x.end(), m) - x.begin();
        cout << amt << endl;
    }
}
