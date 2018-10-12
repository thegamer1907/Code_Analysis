#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <unordered_map>
#include <map>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <cctype>
#define rep(x,y,z) for(long long x=y;x<z;++x)
#define dwn(x,y,z) for(long long x=y;x>z;--x)
using namespace std;

typedef long long ll;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    rep(i,0,n) cin >> a[i];
    ll max = 0;
    rep(i,0,n) if (a[i] > max) max = a[i];
    ll sum = 0;
    rep(i,0,n) sum += max - a[i];
    ll some = (m - sum + n - 1) / n;
    ll res1 = max;
    ll res2 = max + m;
    if (some > 0) res1 += some;
    cout << res1 << " " << res2 << endl;
    return 0;
}
