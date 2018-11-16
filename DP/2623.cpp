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

int ans;

int main() {
    int a, b;
    cin >> a >> b;
    while (a > 1 || b > 1) {
        if (a > b) swap(a, b);
        a++;
        b -= 2;
        ans++;
        if (a <= 0 || b <= 0) break;
    }
    cout << ans;

}

