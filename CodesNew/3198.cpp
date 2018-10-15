#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <algorithm>
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

using ll = long long;
using ld = long double;
using pii = pair<int, int>;

constexpr int MAXN = 300005;
int n, k;
int a[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; ++i) {
        scanf("%d", a + i);
        a[i] = 1 - a[i];
    }

    int ans_end = 0;
    int ans_val = 0;

    int p2 = 0;
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        while (p2 < n and sum <= k) {
            if (p2 - i > ans_val) {
                ans_val = p2 - i;
                ans_end = p2;
            }

            sum += a[p2];
            ++p2;
        }

        if (sum <= k and p2 - i > ans_val) {
            ans_val = p2 - i;
            ans_end = p2;
        }

        sum -= a[i];
    }
    for (int i = 1; i <= ans_val; ++i) {
        a[ans_end - i] = 0;
    }

    printf("%d\n", ans_val);
    for (int i = 0; i < n; ++i) {
        printf("%d%c", 1 - a[i], i == n - 1 ? '\n' : ' ');
    }

    fflush(stdout);

    return 0;
}
