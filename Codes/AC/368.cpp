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

int s(int x) {
    int r = 0;
    while (x) {
        r += x % 10;
        x /= 10;
    }
    return r;
}

int main() {
    cin >> n;
    for (int i = 1; ; i++) {
        if (s(i) == 10) n--;
        if (!n) {
            cout << i;
            return 0;
        }
    }
}
