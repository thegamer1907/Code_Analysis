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
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<string> mas(n);
    for (int i = 0; i < n; ++i)
        cin >> mas[i];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (mas[i][1] == s[0] && mas[j][0] == s[1]) {
                cout << "YES\n";
                return 0;
            }
            if (mas[i][1] == s[1] && mas[i][0] == s[0]) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";

    return 0;
}