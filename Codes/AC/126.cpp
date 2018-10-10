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

int n, m, a[sz], b[sz];

int main() {
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        for (int j = s + 1; j <= s + a[i]; j++)
            b[j] = i;
        s += a[i];
    }
    cin >> m;
    for (int i = 1; i <= m; i++) {
        int x;
        cin >> x;
        cout << b[x] << "\n";

    }

}