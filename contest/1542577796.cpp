#include <algorithm>
#include <cassert>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <complex>
using namespace std;
#define mp make_pair
#define pb push_back
#define fst first
#define snd second
#define sz(a) int((a).size())
#define REP(i, n) for (int i = 0; i < n; ++i)
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef long double ld;
const int INF = 2000 * 1000 * 1000;
const ll LLINF = 1ll << 53;
template<class T> void relaxmax(T& r, T v) { r = max(r, v); }
template<class T> void relaxmin(T& r, T v) { r = min(r, v); }

bool solve(const vi& cnt, vi m, int d = 0) {
    if (d == 4)
        return true;
    bool ans = false;
    for (int i = 0; i < 4; ++i) if (m[i] < 2) 
        for (int j = 0; j < 4; ++j) if (m[j] < 2)
            if (i != j) {
                int mask = (1 << i) | (1 << j);
                if (cnt[mask] > 0) {
                    m[i]++; m[j]++;
                    ans |= solve(cnt, m, d+1);
                    m[i]--; m[j]--;
                }    
            }
    return ans;
}

int main() {
    int n, k;
    scanf("%d%d", &n, &k);
    vi cnt(1 << 4);
    for (int i = 0; i < n; ++i) {
        int v = 0;
        for (int j = 0; j < k; ++j) {
            int u;
            scanf("%d", &u);
            v = (v << 1) | u;
        }
        cnt[v]++; 
    }
    for (int i = 0; i < (1 << 4); ++i) if (cnt[i] > 0)
        for (int j = 0; j < (1 << 4); ++j) if (cnt[j] > 0)
            if ((i & j) == 0) {
                puts("YES");
                return 0;
            }
    vi m(4);
    puts(solve(cnt, m) ? "YES" : "NO");
    return 0;
}
