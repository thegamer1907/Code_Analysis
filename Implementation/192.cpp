#include <bits/stdc++.h>
using namespace std;
#define int int64_t
#define fs first
#define sc second
#define mp make_pair
#define pb push_back
#define pob pop_back
#define sz(v) ((int) (v).size())
#define all(v) (v).begin(), (v).end()
#define forn(i, j, n) for (int (i) = (j); (i) < (n); ++i)
#define forc(i, n, j) for (int (i) = (n) - (1); (i) >= (j); --i)
typedef long long ll;
typedef pair <int, int> pii;
typedef vector <int> vi;
typedef vector <double> vd;
typedef vector <bool> vb;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, a, b;
    cin >> n >> a >> b;
    a += n - 1;
    b += n - 1;
    int p[2 * n];
    forn(i, 1, n)
    {
        p[i * 2] = i;
        p[i * 2 + 1] = i;
    }
    int cnt = 0;
    while (a != b)
    {
        a = p[a];
        b = p[b];
        ++cnt;
    }
    int deg = 0;
    while (n != 1)
    {
        n /= 2;
        ++deg;
    }
    if (deg == cnt)
        cout << "Final!";
    else
        cout << cnt;
    return 0;
}
