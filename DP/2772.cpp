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

int n;
vector <int> ans;

int main() {
    cin >> n;
    while (n) {
        int x = n;
        int p = 1, cur = 0;
        for (int t = 0; t < 8; t++) {
            if (n / p % 10 > 0) cur += p;
            p *= 10;

        }
        n -= cur;
        ans.pb(cur);
    }
    cout << ans.size() << "\n";
    for (int x: ans) cout << x << " ";

}
