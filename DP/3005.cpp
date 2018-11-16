#include <stdio.h>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
typedef long long LL;

const int maxn=1000005;

int n;
char a[maxn], b[maxn];

int main() {
    scanf("%d%s%s", &n, a, b);
    int ans = 0;
    int hold = 0;
    for (int i=0; i<n; i++) {
        if (a[i] != b[i]) {
            if (hold && i > 0 && b[i-1] == a[i]) {
                ans += 1;
                hold = 0;
            }
            else {ans += hold; hold = 1;}
        }
        else {ans += hold; hold = 0;}
    }
    ans += hold;
    printf("%d\n", ans);
    return 0;
}
