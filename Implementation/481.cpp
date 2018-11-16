#include <bits/stdc++.h>

#define rep(i, n) for (int i=0; i<(int)n; i++)
#define all(x) x.begin(), x.end()
#define sz(a) (int)a.size()
#define em emplace_back
#define VI vector<int>
#define VL vector<ll>

using namespace std;

typedef long long ll;
const ll mod = int(1e9) + 7;


int main()
{
    ios::sync_with_stdio(false);
    cout.precision(10);
    cout << fixed;
    cin.tie(0);
    VI v;
    int n, k, x, c=0;
    cin >> n >> k;
    rep(i, n) cin >> x, v.em(x);
    k = v[k-1];
    rep(i, n) if(v[i] >= k && v[i])c++;else break;
    cout << c << endl;
    return 0;
}
