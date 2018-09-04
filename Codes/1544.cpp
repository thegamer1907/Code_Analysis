#include <bits/stdc++.h>
#define MD 1000000007
#define N 100000
using namespace std;
int n, ss, a[N];
long long p[N];

long long cost(int k) {
    for (int i = 0; i < n; i++) {
        p[i] = a[i] + 1LL * (i + 1) * k;
    }
    sort(p, p + n);
    long long cost = 0;
    for (int i = 0; i < k; i++)
        cost += p[i];
    return cost;
}

int main() {
    scanf("%d%d", &n, &ss);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int s = 0, e = n, mid;
    int cnt = 0;
    long long c = 0;
    int ans = 0;
    for (int l = 0; l < 64 && s <= e; l++) {
        mid = s + (e - s) / 2;
        if ((c = cost(mid)) <= ss) {
            ans = c;
            cnt = mid;
            s = mid + 1;
        } else
            e = mid - 1;
    }
    printf("%d %d\n", cnt, ans);
    return 0;
}