#include <bits/stdc++.h>

#define _USE_MATH_DEFINES
#define eb emplace_back
#define all(a) (a).begin(), (a).end()
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define rofn(i, n) for (int i = int(n) - 1; i >= 0; i--)
#define endl '\n'
#define fst first
#define snd second
#define x first
#define y second
#define SZ(x) ((int) x.size())

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<double, double> pd;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef vector<double> vd;
typedef vector<vd> vvd;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

using namespace std;

int a[200000];

int main() {
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    fast_io();
    
    int n, k;
    cin >> n >> k;
    
    
    int s = n * 100, idx, cur = 0;
    forn (i, n) {
        cin >> a[i];
        cur += a[i];
        
        if (i >= k)
            cur -= a[i - k];
        
        if (i >= k - 1 && cur <= s) {
            s = cur;
            idx = i;
        }
    }
        
    cout << idx - k + 2 << endl;
        
    return 0;
}