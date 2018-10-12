#include <vector>
#include <set>
#include <tuple>
#include <limits.h>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
#define printii(a, b) printf("%d %d\n", a, b)
#define printiii(a, b, c) printf("%d %d %d\n", a, b, c)
#define printi(a) printf("%d\n", a)
#define printl(a) printf("%lld\n", a)
#define printArr(a, len) for (int i = 0; i < len; i++) printf("%d ", a[i]); printf("\n")
#define printLArr(a, len) for (int i = 0; i < len; i++) printf("%lld ", a[i]); printf("\n")
#define readi(a) scanf("%d", &a)
#define readii(a, b) scanf("%d%d", &a, &b)
#define readiii(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define readl(a) scanf("%lld", &a)
#define readll(a, b) scanf("%lld%lld", &a, &b)
#define readlll(a, b, c) scanf("%d%d%d", &a, &b, &c)
#define readil(a, b) scanf("%d%lld", &a, &b)
#define reads(a) scanf("%s", &a);
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
const int maxN = (int)5e5, maxM = (int)5e5, intMax = INT_MAX, maxValue = 44721;
const ll llmax = LLONG_MAX, INF = (ll)1e9+1;
ll nod(ll a, ll b) {
    while (a != 0 && b != 0) {
        if (a < b)
            b %= a;
        else
            a %= b;
    }
    return a + b;
}
int nod(int a, int b) {
    while (a != 0 && b != 0) {
        if (a < b)
            b %= a;
        else
            a %= b;
    }
    return a + b;
}
ll nok(ll a, ll b) {
    return a * b / nod(a, b);
}
int nok(int a, int b) {
    return a * b / nod(a, b);
}

int k;
string q;
vector<ll> v;

int main() {

    cin >> k >> q;
    ll res = 0;
    if (k == 0) {
        ll qqq = 0;
        for (int i = 0; i < (int)q.length(); i++) {
            while (i < (int)q.length() && q[i] == '0') {
                i++;
                qqq++;
            }
            res += ((qqq + 1) * qqq) >> 1;
            qqq = 0;
        }
        printl(res);
        return 0;
    }
    ll w = 0;
    for (int i = 0; i < (int)q.length(); i++) {
        w++;
        if (q[i] == '1') {
            if (v.size() >= k)
                res += 1ll * v[v.size() - k] * w;
            v.push_back(w);
            w = 0;
        }
    }
    if (v.size() >= k)
        res += 1ll * v[v.size() - k] * (w + 1);
    printl(res);

    return 0;
}