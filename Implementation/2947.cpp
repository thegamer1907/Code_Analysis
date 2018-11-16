#include<bits/stdc++.h>
#define LL long long
using namespace std;



int main() {
    int a, b, c, d, n; scanf("%d %d %d %d %d", &a, &b, &c, &d, &n);
    int ans = 0;
    for(int i = 1; i <= n; ++i) {
        if((i%a) && (i%b) && (i%c) && (i%d)) ans++;
    }
    printf("%d\n", n - ans);
    return 0;
}
