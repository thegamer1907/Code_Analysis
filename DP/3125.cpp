#include<bits/stdc++.h>

#define V vector
#define VI V<int>
#define VVI V<VI>

#define ll long long
#define VLL V<ll>
#define VVLL V<VLL>

#define pb push_back
#define all(v) (v).begin(), (v).end()

#define FORN(i, n) for (int (i) = 0;(i) < (n); (i)++)

#define P pair
#define Pii P<int, int>
#define VPii V<Pii>
#define Pll P<ll, ll>
#define VPll V<Pll>
#define mp make_pair

#define fi first
#define se second

#define re return

using namespace std;

ll gcd(ll a, ll b) {
    while (a && b)
        a > b ? a %= b : b %= a;
    return a + b;
}

int main() {
    ios_base::sync_with_stdio(false);

    // ifstream cin(".in");
    // ofstream cout(".out");

    int n, m;
    cin >> n >> m, n++, m++;
    V<V<bool>> b(n, V<bool>(m));

    char c;
    for (int i = 1; i < n; i++)
        for (int j = 1; j < m; j++) {
            cin >> c;
            b[i][j] = c == '.';
        }

    VVLL hor(n, VLL(m)), ver(n, VLL(m));
    for (int i = 1; i < n; i++)
        for (int j = 1; j < m; j++) {
            hor[i][j] = hor[i - 1][j] + hor[i][j - 1] - hor[i - 1][j - 1] + (b[i][j] && b[i][j - 1]);

            ver[i][j] = ver[i - 1][j] + ver[i][j - 1] - ver[i - 1][j - 1] + (b[i][j] && b[i - 1][j]);
        }

    int q, i1, j1, i2, j2;
    for (cin >> q; q > 0; q--) {
        cin >> i1 >> j1 >> i2 >> j2;
        cout << (hor[i2][j2] - hor[i1 - 1][j2] - hor[i2][j1] + hor[i1 - 1][j1]
                 + ver[i2][j2] - ver[i1][j2] - ver[i2][j1 - 1] + ver[i1][j1 - 1]) << endl;
    }


    re 0;
}