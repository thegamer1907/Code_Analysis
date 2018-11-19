#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <iterator>
#include <functional>
#include <unordered_set>
#include <map>
#include <numeric>
#include <bitset>
#include <cmath>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forn(i, n) for (int i = 0; i < (int) n; i++)
#define re return
#define vi vector <int>
#define vl vector <ll>
#include <iomanip>
#define PI 3.1415926536
#define pb push_back
using namespace std;

inline int nxt() {
    int x;
    scanf("%d", &x);
    return x;
}

bool f(double a, double b, double c) {
    while (b < a) b += 360;
    while (c < a) c += 360;
    return b > c;
}
int main() {
    ios::sync_with_stdio(false);
    double p, q, r, s, t;
    int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    p = a % 12 * 30 + b * 0.5 + c * 0.5 / 60;
    q = b * 6 + c * 0.1;
    r = c * 6;
    s = d % 12 * 30;
    t = e % 12 * 30;
    printf(f(s, t, p) && f(s, t, q) && f(s, t, r) || f(t, s, p) && f(t, s, q) && f(t, s, r) ? "YES" : "NO");
    return 0;
}