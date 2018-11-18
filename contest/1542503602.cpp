#pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;
using matrix = vector<vector<long long>>;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define all(x) (x).begin(), (x).end()
//#define int ll

const int MAXN = 120;
string str[MAXN];

signed main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string s;
    int n;
    cin >> s >> n;
    for (int i = 0; i < n; ++i) {
        cin >> str[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            string t = str[i] + str[j];
            if (t.find(s) != -1) {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}
