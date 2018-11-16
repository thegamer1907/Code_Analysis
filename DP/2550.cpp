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

int n, a[sz];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    int cur = 0, ans = 1;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] > a[i - 1]) {
            cur++;
            ans = max(ans, cur);
        } else {
            cur = 1;
        }
    }
    cout << ans;
}
