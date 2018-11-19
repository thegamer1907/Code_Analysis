#include <bits/stdc++.h>
/*#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
*/
/*#pragma GCC optimize("O3")
#pragma GCC target("sse,sse2,sse3,sse4,popcnt,abm,mmx")*/

using namespace std;
// using namespace __gnu_pbds;

#define ABS(x) ((x) < 0 ? -(x) : (x))
#define ld long double
#define ll long long
#define uint unsigned int
#define all(a) a.begin(), a.end()
#ifdef DEBUG
    #define NAME "1"
#else
    #define NAME "queens"
#endif
#define FREOPEN freopen(NAME".in", "r", stdin); freopen(NAME".out", "w", stdout)
#define PI 3.1415926535897932384626433832795

// mt19937 gen{random_device()()};

const int N = 2 * 1e5 + 6, MODM = 1e9 + 7;
const ll INF = 4LL * (ll)1e18 + 12;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<vector<int>> mas(n);
    for (int i = 0; i < n; ++i) {
        vector<int> now(k);
        bool fl = 1;
        for (int j = 0; j < k; ++j) {
            cin >> now[j];
            fl &= (now[j] == 0);
        }
        if (fl) {
            cout << "YES\n";
            return 0;
        }
        mas[i] = now;
    }
    sort(all(mas));
    for (int i = 0; i < n; ++i) {
        vector<vector<int>> cc;
        for (int j = 0; j < (1 << k); ++j) {
            vector<int> cur;
            for (int len = 0; len < k; ++len) {
                cur.push_back(((j & (1 << len)) != 0));
            }
            bool fl = 1;
            for (int c = 0; c < k; ++c) {
                if (mas[i][c] == 1 && cur[c] == 1)
                    fl = 0;
            }
            if (fl)
                cc.push_back(cur);
        }
        for (auto to : cc) {
            if (binary_search(all(mas), to)) {
                cout << "YES\n";
                return 0;
            }
        }
        
    }
    cout << "NO\n";
    return 0;
}