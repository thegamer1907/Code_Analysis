#include <bits/stdc++.h>
using namespace std;

#ifdef loc
    #include "loc_debug.h"
#else
    #define pr(...)
    #define pra(a,n)
    #define praa(a,n,m)
    #define prl()
#endif

typedef long long ll;
typedef long double ld;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define all(x) (x).begin(), (x).end()
#define sz(a) int(a.size())
#define rep(i, s, n)  for(int i = s; i <= n; ++i)
#define rev(i, n, s)  for(int i = n; i >= s; --i)
#define fore(x, a) for(auto &&x : a)
#define fill(a, x) memset((a), (x), sizeof(a))
#define tcase int __t; cin >> __t; rep(tc, 1, __t)
#define F first
#define S second
#define gc getchar

const int mod = 1000000007;
const int N = 105;

string s[N];

int main() {
    fast_io;
    string p;
    cin >> p;
    int n;
    cin >> n;
    bool ok = 0;
    rep(i, 0, n - 1) {
        cin >> s[i];
        if(s[i] == p) {
            ok = 1;
        }
    }
    rep(i, 0, n - 1) {
        rep(j, 0, n - 1) {
            stringstream ss;
            ss << s[i][1] << s[j][0];
            if(ss.str() == p) {
                ok = 1;
            }
        }
    }
    if(ok) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    cout << endl;
    return 0;
}
