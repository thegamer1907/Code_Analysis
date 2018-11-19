#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <numeric>
#include <set>
#include <map>
#include <cassert>
#include <deque>
#include <numeric>

using namespace std;

//#define int long long
#define len(v) (int)v.size()
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define x first
#define y second
#define mp(a, b) make_pair(a, b)

typedef long double ld;

const int INF = 1e9;
const ld eps = 1e-9;

template <typename T1, typename T2>
bool cmin(T1 &a, const T2 &b) {
    if (b < a) {
        a = b;
        return true;
    }
    return false;
}

template <typename T1, typename T2>
bool cmax(T1 &a, const T2 &b) {
    if (b > a) {
        a = b;
        return true;
    }
    return false;
}

const int mm = 12 * 60;

signed main() {
    
    iostream::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int h, m, s, t1, t2;
    cin >> h >> m >> s >> t1 >> t2;
    h %= 12;
    t1 %= 12;
    t2 %= 12;
    ld sd = s;
    ld md = sd / 60.0 + (ld)m;
    ld hd = (ld)h * 5.0 + md / 12.0;
    ld t1d = t1 * 5.0;
    ld t2d = t2 * 5.0;
    
    if (t1d > t2d)
        swap(t1d, t2d);
    
    if (!((t1d <= hd && hd <= t2d) || (t1d <= md && md <= t2d) || (t1d <= sd && sd <= t2d))) {
        cout << "YES";
        exit(0);
    }
    
    if (hd <= t1d)
        hd += 60;
    if (md <= t1d)
        md += 60;
    if (sd <= t1d)
        sd += 60;
    
    t1d += 60;
    
    swap(t1d, t2d);
    if (!((t1d <= hd && hd <= t2d) || (t1d <= md && md <= t2d) || (t1d <= sd && sd <= t2d))) {
        cout << "YES";
        exit(0);
    }
    cout << "NO";
    
    
}
