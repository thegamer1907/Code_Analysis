#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using LL = long long;

bool is_perfect(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum == 10;
}

int main() {
    int k = 0;
    scanf("%d", &k);
    int ans = 10;
    while (k > 0) {
        ++ans;
        if (is_perfect(ans)) {
            --k;
        }
    }
    printf("%d\n", ans);
    return 0;
}
