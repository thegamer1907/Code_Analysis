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

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

using namespace std;

int main() {
#ifdef _DEBUG
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    fast_io();

    string s;
    cin >> s;

    for (char c : s) {
        if (c == 'H' || c == 'Q' || c == '9') {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}