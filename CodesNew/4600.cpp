#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
//const int MOD = 1e9 + 7;
int n, a[500005], num;
int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, a + n);
    for(int i = 0; i < n; i++) {
        if(a[i] >= 2 * a[num])
            num++;
    }
    printf("%d", n - min(num, n / 2));
    return 0;
}
//hahaha