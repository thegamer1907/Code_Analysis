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

double a, b;
int r, v;
string s, t;

void go(int p) {
    if (p == t.length()) {
        if (r == v) {
            a++;
        }
        b++;
    }else {
        if (t[p] == '+') {
            r++;
            go(p + 1);
            r--;
        }
        if (t[p] == '-') {
            r--;
            go(p + 1);
            r++;
        }
        if (t[p] == '?') {
            r++;
            go(p + 1);
            r--;
            r--;
            go(p + 1);
            r++;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> s >> t;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == '+') v++; else v--;
    go(0);
    printf("%.10f", a / b);
}
