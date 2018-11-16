#include <bits/stdc++.h>

#define F first
#define S second
#define sz(a) int((a).size())
#define all(a) (a).begin(),(a).end()
#define pb push_back
#define in insert
#define pii pair <int, int>
#define count_bit(a) __builtin_popcount(a)
#define GGWP return 0

using namespace std;

typedef long long ll;
typedef long double ld;
typedef unsigned long long ull;

const int inf = int (1e9 + 7);
const double eps = (1e-9);


int main () {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE
   //     freopen("in", "r", stdin);
    #endif // ONLINE_JUDGE

    int n, a, b, res = 0;

    cin >> n >> a >> b;

    if (a > b)
        swap (a, b);

    a += n - 1;
    b += n - 1;

    while (a != b) {
        a /= 2;
        b /= 2;
        ++res;
    }

    if (a == 1) {
        cout << "Final!";
    }
    else
        cout << res;

    GGWP;
}
