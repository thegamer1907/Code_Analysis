
#include <bits/stdc++.h>

using namespace std;

const int N = 100005, INF = (int) 2e9;

int n, a[N];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", a + i);
    int ansv = INF, ansi = -1;
    for (int i = 0; i < n; i++) {
        int p = a[i] / n, r = a[i] % n, t = p * n + i;
        if (r > i)
            t += n;
        if (t < ansv) {
            ansv = t;
            ansi = i;
        }
    }
    printf("%d\n", ansi + 1);
}
