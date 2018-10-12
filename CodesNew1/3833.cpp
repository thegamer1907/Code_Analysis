#include <bits/stdc++.h>
using namespace std;
int n;
int IN() {
    int f, c, x;
    while (!isdigit(c = getchar()) && c != '-'); c == '-' ? (f = 1, x = 0) : (f = 0, x = c - '0');
    while (isdigit(c = getchar())) x = (x << 1) + (x << 3) + c - '0'; return !f ? x : -x;
}
int main() {
    n = IN();
    long long Max = 0;
    long long s = 0, sum;
    int w;
    for (int i = 0; i<n; i++) {
        w = IN();
        s += w;
        if (w > Max)
            Max = w;
    }
    sum = (s + n - 2) / (n - 1);
    printf("%d\n", max(Max, sum));
    return 0;
}