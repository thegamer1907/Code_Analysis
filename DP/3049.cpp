#include <bits/stdc++.h>
#pragma optimize("Ofast")
using namespace std;
typedef long long ll;
#define rep(i, n) for (ll i = 0; (i) < (n); (i)++)
#define _rep(i, n) for (ll i = 1; (i) <= (n); (i)++)

#ifdef VinceBlack
#define _debug(...) fprintf(stderr, __VA_ARGS__);
#else
#define _debug(...) ;
#endif

#define mod 0x3b9aca07

template <typename T>
class Matrix
{
#define ull unsigned long long
public:
    ull n;
    bool cyclic = false;
    vector<vector<T> > a;
    Matrix() {}
    Matrix(ull n) : n(n)
    {
        init();
    }
    vector<T> &operator[](ull i)
    {
        return a[i];
    }

    Matrix<T> operator*(Matrix &b) const
    {
        Matrix<T> res(n);
        if (cyclic)
        {
            res.cyclic = true;
            rep(k, n) if (a[0][k]) rep(j, n) if (b[k][j])
                        {
#ifdef mod
                            res[0][j] += a[0][k] * b[k][j] % mod, res[0][j] %= mod;
#else
                            res[0][j] += a[0][k] * b[k][j];
#endif
                        }
            rep(i, n - 1)
            {
                res[i + 1][0] = res[i][n - 1];
                rep(j, n - 1) res[i + 1][j + 1] = res[i][j];
            }
        }
        else rep(k, n) rep(i, n) if (a[i][k]) rep(j, n)
                        {
#ifdef mod
                            res[i][j] += a[i][k] * b[k][j] % mod, res[i][j] %= mod;
#else
                            res[i][j] += a[i][k] * b[k][j];
#endif
                        }
        return res;
    }

    Matrix<T> operator^(ull t) const
    {
        Matrix<T> res(n);
        res.cyclic = cyclic;
        rep(i, n) res[i][i] = 1;
        Matrix<T> tmp = *this;
        while (t)
        {
            if (t & 1) res = res * tmp;
            t >>= 1;
            tmp = tmp * tmp;
        }
        return res;
    };

    void print()
    {
        rep(i, n) rep(j, n) cout << a[i][j] << j == n - 1 ? '\n' : ' ';
    };

private:
    void init()
    {
        a = vector<vector<T> >(n, vector<T>(n, 0));
        rep(i, n) rep(j, n) a[i][j] = 0;
    };
#undef ull
};

signed main()
{
#ifdef Yee_172
    freopen("../in.txt", "r", stdin);
#endif
    ll n;
    scanf("%lld", &n);
    Matrix<ll> a(4);
    a.cyclic = true;
    rep(i, 4) rep(j, 4) if (i != j) a[i][j] = 1;
    Matrix<ll> r = a ^ n;
    printf("%lld\n", r[3][3]);
    return 0;
}
