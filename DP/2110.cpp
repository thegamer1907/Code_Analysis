#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)


using namespace std;

typedef long long ll;

const int MAXN = 112345;
const int MAXINT = 2147483098;
const ll MAXLL = 9223372036854775258LL;
const ll MOD = 1e9 + 7;



set<int> s;

int a[MAXN], ans[MAXN];

int main()
{
    fast;
    int n,m;
    cin >> n >> m;
    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=n-1; i>=0; i--) s.insert(a[i]), ans[i] = s.size();
    int x;
    for (int i=0; i<m; i++) cin >> x, cout << ans[x-1] << endl;

    return 0;
}
