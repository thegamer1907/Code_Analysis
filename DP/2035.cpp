#include <bits/stdc++.h>
#define fi first
#define se second
#define pback push_back
#define task inp
#define forr(i,a,b) for(int i=a; i<=b; ++i)
#define ford(i,a,b) for(int i=a; i>=b; --i)
#define fileio freopen("in.inp", "r", stdin)
#define fileoi freopen("out.out", "w", stdout)
#define fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

using namespace std;
typedef pair<int, int> ii;
const int N = 1e5+2;
int n, m, a[N], f[N];
bool check[N];
bool cmp(int a, int b)
{
    return a > b;
}

signed main()
{
    cin >> n >> m;
    forr(i, 1, n) cin >> a[i];
    ford(i, n, 1) if (!check[a[i]]){
        f[i] = f[i+1] +1;
        check[a[i]] = true;
    } else f[i] = f[i+1];
    while (m--){
        int li; cin >> li;
        cout << f[li] << endl;
    }
}
