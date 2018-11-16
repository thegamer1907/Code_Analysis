#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdio>
#include <stack>
#include <deque>
#include <queue>
#include <cmath>
#include <set>
#include <map>

#pragma warning (disable : 4996);

typedef long long int64;
typedef unsigned long long uint64;
typedef long double double128;

const int INF = 1e9;
const int N = 1e6;
const double EPS = 1e-10;

using namespace std;

int main() {
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    bool ok = false;
    int i = 0;
    while (i != s - 1) {
        i += a[i];
        if (i >= n || i >= s)
            break;
        if (i == s - 1) {
            ok = true;
            break;
        }
    }
    puts(ok ? "YES" : "NO");
}