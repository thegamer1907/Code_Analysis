#include <bits/stdc++.h>
using namespace std;
#define printii(a, b) printf("%d %d\n", a, b)
#define printiii(a, b, c) printf("%d %d %d\n", a, b, c)
#define printiiii(a, b, c, d) printf("%d %d %d %d\n", a, b, c, d)
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
#define printd(a) printf("%f\n", a)
#define printll(a, b) printf("%lld %lld\n", a, b)
#define prints(a) printf("%s", a)
#define for0(a) for (int i = 0; i < a; i++)
#define for1(a) for (int i = 1; i <= a; i++)
#define readArr(a, len) for (int i = 0; i < len; readi(a[i++]));
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
const int maxN = (int)2e5, maxM = (int)1e2, intMax = INT_MAX, maxValue = 44721;
const ll llmax = LLONG_MAX, INF = (ll)1e9+1, mod = 998244353;
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
ll modPlus(ll a, ll b) {
    a %= mod;
    b %= mod;
    return a + b;
}
ll modPlus(int a, int b) {
    a %= mod;
    b %= mod;
    return (a + b) % mod;
}
ll binPow(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b % 2 == 1) {
            res *= a;
            res %= mod;
        }
        a = a * a;
        a %= mod;
        b >>= 1;
    }
    return res;
}

int n, q;
ll arr[maxN];

int main() {

    readii(n, q);
    for0(n) {
        readl(arr[i]);
        if (i > 0)
            arr[i] += arr[i - 1];
    }
    ll act = 0, k;
    for (int i = 0; i < q; i++) {
        readl(k);
        act += k;
        int l = 0;
        int r = n;
        while (l != r) {
            int half = (l + r) >> 1;
            if (arr[half] > act)
                r = half;
            else
                l = half + 1;
        }
        if (l == n) {
            act = 0;
            printi(n);
        } else {
            printi(n - l);
        }
    }


    return 0;
}