/*================================================================
*   Copyright (C) 2019 Sangfor Ltd. All rights reserved.
*   
*   文件名称：C.cpp
*   创 建 者： badcw
*   创建日期：2019年05月01日
*
================================================================*/
#include <bits/stdc++.h>

#define ll long long
using namespace std;

const int maxn = 1e5+5;
const int mod = 998244353;
ll qp(ll a, ll n) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) res = res * a % mod;
        a = a * a % mod;
        n >>= 1;
    }
    return res;
}

template <class T>
inline bool scan(T& ret) {
    char c;
    int sgn;
    if (c = getchar(), c == EOF) return 0; // EOF
    while (c != '-' && (c < '0' || c > '9')) c = getchar();
    sgn = (c == '-') ? -1 : 1;
    ret = (c == '-') ? 0 : (c - '0');
    while (c = getchar(), c >= '0' && c <= '9') ret = ret * 10 + (c - '0');
    ret *= sgn;
    return 1;
}

template <class T>
inline void out(T x) {
    if (x > 9) out(x / 10);
    putchar(x % 10 + '0');
}

ll n, m, k;
ll a[maxn];

int main()
{
    scanf("%lld%lld%lld", &n, &m, &k);
    for (int i = 1; i <= m; ++i) scanf("%lld", &a[i]);
    ll pos = 0;
    ll tmp = k, tt = 0;
    int time = 0;
    while (pos < m) {
        pos = lower_bound(a + 1, a + 1 + m, tmp) - a;
        if (a[pos] > tmp) pos --;
        int del = pos - tt;
        tt = pos;
        tmp += del;
        if (del == 0) {
            tmp += k * ((a[pos + 1] - tmp) / k + ((a[pos + 1] - tmp) % k == 0 ? 0 : 1));
        } else time ++;
//        printf("%lld\n", tmp);
    }
    printf("%d\n", time);
    return 0;
}