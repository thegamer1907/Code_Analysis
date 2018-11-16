#include <bits/stdc++.h>

using namespace std;

#ifdef LOCAL
    #define doit(x) x
#else
    #define doit(x) ;
#endif

#define fr first
#define sc second
#define pb push_back
#define int long long
#define sz(x) ((int) x.size())
#define all(x) (x).begin(), (x).end()
#define f0r(i, n) for (int i = 0; i < n; ++i)
#define vi vector <int>
#define pii pair <int, int>
#define vpii vector <pii>
#define mk make_pair
#define mk1(t, a) t a; cin >> a
#define mk2(t, a, b) t a, b; cin >> a >> b
#define mk3(t, a, b, c) mk1(t, a); mk2(t, b, c)
#define mk4(t, a, b, c, d) mk2(t, a, b); mk2(t, c, d)
#define makev(a) mk1(int, n); vi a(n); f0r(i, n) cin >> a[i]

template <class T> void maxa(T& a, T b) { a = max(a, b); }
template <class T> void mina(T& a, T b) { a = min(a, b); }


// b - 2
// c - 4
// d - 1

void solve() {
    mk2(int, n, m);
    int ans = 0;
    while (n < m) {
        if (m % 2 == 0) m /= 2;
        else m++;
        ans++;
    }
    cout << ans + n - m;
}


int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout << fixed << setprecision(10);
    doit(freopen("input.txt", "r", stdin));
    doit(freopen("output.txt", "w", stdout));
    int test_case = 1;
    while (cin.peek() != EOF) {
        if (isspace(cin.peek())) cin.get();
        else {
            doit(cout << "Case #" << test_case++ << "\n");
            solve();
            doit(cout << "\n\n");
            string s;
            do getline(cin, s);
            while (!cin.eof() && !s.empty());
        }
    }
    return 0;
}

