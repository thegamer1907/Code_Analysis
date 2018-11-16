#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> par;
typedef vector<ll> vll;

#define X first
#define Y second
#define all(x) (x).begin(), (x).end()
#define pw(x) (1ll << (x))
#define sqr(x) ((x)*(x))

ll rnd() {
    ll res = rand();
    res = (res << 16) + rand();
    return res;
}

ll logn(ll n) {
    ll xx = ll(log2(ld(n)));
    if (pw(xx) != n) ++xx;
    return xx;
}

struct Sparse {
    vector<vll> t;

    void build(vll &a) {
        ll n = a.size();
        t.resize(logn(n) + 1);
        t[0] = a;
        for (int i = 1; i < t.size(); ++i) {
            t[i].resize(n - pw(i) + 1);
            for (int j = 0; j < t[i].size(); ++j) {
                t[i][j] = min(t[i - 1][j], t[i - 1][j + pw(i - 1)]);
            }
        }
    }

    ll Min(ll l, ll r) {
        if (l > r) swap(l, r);
        ll xx = logn(r - l + 1);
        ll f1 = t[xx][l], f2 = t[xx][r - pw(xx) + 1];
        return min(f1, f2);
    }

    void print() {
        for (int i = 0; i < t.size(); ++i) {
            for (int j = 0; j < t[i].size();++j) cout << t[i][j] << ' ';
            cout << '\n';
        }
    }
};

int source() {
    ll n,a , b;
    cin >> n >> a >> b;
    --a, --b;
    if (b < a) swap(a, b);
    vector<ll> x(n);
    for (int i = 0; i < n; ++i) x[i] = i;
    ll kol = 1;
    while (x.size() > 2) {
        vll nx;
        for (int i =0 ; i < x.size(); i += 2) {
            if (x[i] == a || x[i + 1] == a) {
                if (x[i] == a) {
                    if (x[i + 1] == b) {
                        cout << kol;
                        return 0;
                    }
                    nx.push_back(a);
                } else {
                    if (x[i] == b) {
                        cout << kol;
                        return 0;
                    }
                    nx.push_back(a);

                }
                continue;
            }
            if (x[i] == b || x[i + 1] == b) {
                nx.push_back(b);
                continue;
            }
            nx.push_back(x[i]);
        }

        x = nx;
        //for (auto to : x) cerr << to << ' ';
        //cerr << '\n';
        ++kol;
    }
    cout << "Final!";
    return 0;
}

int main() {
#ifdef aokigahara
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // aokigahara

    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);

    source();
#ifdef aokigahara
    cerr << "\n\nTIME : " << fixed << setprecision(12) << clock() * 1.0 / CLOCKS_PER_SEC << "\n";
#endif // aokigahara
    return 0;
}
