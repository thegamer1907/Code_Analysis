#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <stack>
#include <vector>
#include <set>
#include <map>
#include <ctime>
#include <unordered_set>
#include <unordered_map>

using namespace std;

#ifdef __APPLE__
#define eprintf(...) fprintf(stderr, __VA_ARGS__)
#else
#define eprintf(...)
#endif

const int N = (int)1e7;
const int MOD = (int)1e9 + 7;
const int inf = (int)5e8;
const long long infll = (long long)1e17;


void solve() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> w(n);
    for (int i = 0; i < n; ++i) {
        string cur;
        cin >> w[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            string ww = w[i] + w[j];
            int m = ww.length();
            for (int i = 0; i < m - 1; ++i) {
                if (ww[i] == s[0] && ww[i + 1] == s[1]) {
                    cout << "YES\n";
                    return;
                }
            }
        }
    } 
    cout << "NO\n";
}

int main() {
#ifdef __APPLE__
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
