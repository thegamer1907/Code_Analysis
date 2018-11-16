#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.in", "r", stdin);
#endif

    int n, m, res = 0;
    scanf("%d%d", &n, &m);
    while (m > n) {
        if (m % 2 == 0) m /= 2;
        else m++;
        res++;
    }
    res += abs(m - n);
    printf("%d", res);

    return 0;
}