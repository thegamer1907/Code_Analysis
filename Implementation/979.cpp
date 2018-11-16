#include <bits/stdc++.h>

using namespace std;

#define rall(a) a.rbegin(), a.rend()
#define all(a) a.begin(), a.end()
#define pii pair<int, int>
#define pb push_back
#define fi first
#define se second

typedef vector<int> vint;
typedef long double ld;
typedef long long ll;
typedef string str;

const int MOD = 1e9 + 7;
const int MX = 1e6;
const ll INF = 7e18;

main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, t;
    cin >> n >> t;
    str s;
    cin >> s;
    while (t--) {
        for (int i = 0; i + 1 < n;) {
            if (s[i] == 'B' && s[i + 1] == 'G') {
                swap(s[i], s[i + 1]);
                i += 2;
            }
            else
                i += 1;
        }
    }
    cout << s;
}

