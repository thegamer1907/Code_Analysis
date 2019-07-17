#include <iostream>
#include <cstdio>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <map>
#include <algorithm>
#include <limits.h>

#include <sstream>
using namespace std;

int main()
{
    long long n, m, k;
    // scanf("%d %d %d", &n, &m, &k);
    cin >> n >> m >> k;
    vector<long long>data = vector<long long>(m);
    for (int i = 0; i < m; i++) scanf("%I64d", &data[i]);

    long long delta = 0, st = 0, ans = 0, page = 0;
    while (delta < m) {
        // int l = lower_bound(data.begin(), data.end(), st) - data.begin();
        // cout << delta + k << endl;
        int r = upper_bound(data.begin(), data.end(), page + delta + k) - 1 - data.begin();
        // cout << st << " " << r << endl;
        if (r < st) {
            page += k;
            continue;
        }

        delta += r - st + 1;
        st = r + 1;

        ans ++;
    }
    cout << ans << endl;
    return 0;
}