#include <bits/stdc++.h>

// #define int long long

#define sync ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define file freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout)
#define fori(x, n) for(int i = x; i < n; i++)
#define forir(x, n) for(int i = n; i >= x; i--)
#define forj(x, n) for(int j = x; j < n; j++)
#define forjr(x, n) for(int j = n; j >= x; j--)
#define fork(x, n) for(int k = x; k < n; k++)
#define forkr(x, n) for(int k = n; k >= x; k--)
#define debug(x) cerr << #x << ": " << x << '\n';
#define debugP(p) cerr << #p << ": [ " << p.first << ", " << p.second << ']' << '\n';
#define debugV(v) cerr << #v << ": { "; fori(0, v.size()) cerr << v[i] << ((i != v.size() - 1) ? ", " : " "); cerr << '}' << '\n';
#define debugA(a, n) cerr << #a << ": { "; fori(0, n) cerr << a[i] << ((i != n - 1) ? ", " : " "); cerr << '}' << '\n';
#define min3(x, y, z) min(min(x, y), z)
#define max3(x, y, z) max(max(x, y), z)
#define mod(x) (x + MOD) % MOD
#define endl '\n'
#define ends ' '

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;

const int N = 1e2 + 20, MOD = 1e9 + 7;

int b[N], g[N];

int32_t main(){
    
    sync;
    
    int n; cin >> n;
    fori(0, n) cin >> b[i];
    int m; cin >> m;
    fori(0, m) cin >> g[i];

    sort(b, b + n);
    sort(g, g + m);

    int i, j, cnt;
    cnt = i = j = 0;
    while (i < n && j < m) {
        int x = b[i] - g[j];
        if (abs(x) <= 1) i++, j++, cnt++;
        else if (x < 0) i++;
        else if (x > 0) j++;
    }
    cout << cnt << endl;

    return 0;
}