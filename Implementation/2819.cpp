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

int main() {
    cin >> n;
    cout << n / 2 << "\n";
    if (n & 1) {
        for (int i = 1; i < n / 2; i++)
            cout << 2 << " ";
        cout << 3 << " ";
    } else {
        for (int i = 1; i <= n/2; i++)
            cout << 2 << " ";
    }

}

