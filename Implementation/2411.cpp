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

int d[sz];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k, ans = 0, s = 0;
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        if (s + i * 5 + k <= 240) {
            ans = i;
        }
        s += i *5;
    }
    cout << ans;
}
