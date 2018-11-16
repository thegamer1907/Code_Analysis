// Why I am so dumb? :c
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair

#define all(x) (x).begin(), (x).end()

#define fi first
#define se second

using namespace std;

typedef long long ll;

typedef vector < vector <int> > matrix;

const int mod = 1e9+7;

matrix zero, mltBy, ans;

int n;

void pre() {
    zero = {{1, 0, 0, 0}};
    mltBy = {{0, 1, 1, 1},
             {1, 0, 1, 1},
             {1, 1, 0, 1},
             {1, 1, 1, 0}};
}

void addMod(int &a, int b) {
    a += b;

    if (mod <= a) {
        a -= mod;
    }
}

void mult(matrix &a, matrix b) {
    static matrix c;
    c.resize(a.size());

    for (int i = 0; i < c.size(); ++i) {
        c[i].assign(b[0].size(), 0);
    }

    for (int i = 0; i < c.size(); ++i) {
        for (int j = 0; j < c.size(); ++j) {
            for (int k = 0; k < b.size(); ++k) {
                addMod(c[i][j], a[i][k] * 1ll * b[k][j] % mod);
            }
        }
    }

    a = c;
}

matrix binPow(matrix a, int p) {
    static matrix ret;
    ret.resize(a.size());

    for (int i = 0; i < ret.size(); ++i) {
        ret[i].resize(a[i].size());
    }

    for (int i = 0; i < ret.size(); ++i) {
        for (int j = 0; j < ret[i].size(); ++j) {
            ret[i][j] = (i == j);
        }
    }

    for (; p > 0; p >>= 1) {
        if (p & 1) {
            mult(ret, a);
        }

        mult(a, a);
    }

    return ret;
}

void solve() {
    scanf("%d", &n);
    ans = zero;
    mult(ans, binPow(mltBy, n));

    printf("%d\n", ans[0][0]);
}

int main() {
#ifdef BThero
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // BThero

    int tt = 1;

    pre();

    while (tt--) {
        solve();
    }

    return 0;
}
