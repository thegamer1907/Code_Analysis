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

random_device rd;
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}

using namespace std;

int main() {
#ifdef _DEBUG
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    fast_io();

    int n;
    cin >> n;
    
    int fx = 0, fy = 0, fz = 0;
    forn (i, n) {
        int x, y, z;
        cin >> x >> y >> z;
        
        fx += x;
        fy += y;
        fz += z;
    }
    
    if (fx || fy || fz)
        cout << "NO";
    else
        cout << "YES";
    
    cout << endl;    

    return 0;
}