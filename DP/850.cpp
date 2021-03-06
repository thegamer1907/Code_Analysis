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

const int N = 1e3 + 20, MOD = 1e9 + 7;

int a[N], dp[N];

int32_t main(){
    
    sync;
    
    int n, one = 0, zero = 0, mxZero = INT_MIN; cin >> n;
    fori(0, n) { 
        cin >> a[i];
        if (a[i] == 1) one++, zero--;
        else if (a[i] == 0) zero++;
        mxZero = max(mxZero, zero);
        zero = max(zero, 0);
    }
    cout << mxZero + one << endl;

    return 0;
}