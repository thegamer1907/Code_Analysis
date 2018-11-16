#include <random>
#include <vector>
#include <cstdio>
#include <iostream>
#include <tuple>
#include <stdexcept>
#include <map>
#include <set>
#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstring>
#include <deque>
#include <numeric>
#include <unordered_map>
#include <bitset>
#include <queue>

#define pb push_back
#define F first
#define S second
using namespace std;
typedef long long ll;
#define mod ll(1e9 + 7)
#define mp make_pair
#define pb push_back
#define sqr(xx) ((xx)*(xx))
#define sz int(1e6)

int n, p[sz], c[sz], cnt[sz], w[sz], ans;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
        if (p[i] != -1)
            cnt[p[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        int s = 0;
        for (int j = 1; j <= n; j++) {
            c[j] = !w[j] && cnt[j] == 0;
            s += c[j];
        }
        if (!s) break;
        for (int j = 1; j <= n; j++) {
            if (c[j]) {
                w[j] = 1;
                if (p[j] != -1) {
                    cnt[p[j]]--;
                }
            }
        }
        ans++;
    }

    cout << ans;
}

