#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include <cassert>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <utility>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <bitset>
#include <complex>
using namespace std;

#ifdef DEBUG
    #define debug(args...)  {dbg,args; cerr<<endl;}
#else
    #define debug(args...)  // do nothing
#endif

struct debugger
{
    template<typename T> debugger& operator , (const T& v)
    {
        cerr << v << " ";
        return *this;
    }
} dbg;

int main()
{
    int n, d, m, s;
    cin >> n >> d;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> m >> s;
        a[i] = make_pair(m, s);
    }
    sort(a.begin(), a.end());
    int i = 0, j = 0;
    long long res = 0, now = 0;
    while (j < n) {
        while (j < n && a[j].first-a[i].first < d) {
            now += a[j].second;
            ++j;
        }
        res = max(res, now);
        while (a[j].first-a[i].first >= d) {
            now -= a[i].second;
            ++i;
        }
    }
    cout << res << '\n';
}
// Time: O(nlogn), Space: O(n)
