#include<bits/stdc++.h>
#define LL long long
using namespace std;

int a[23];

int main() {
    int n; scanf("%d", &n);
    int pos = 0;
    while(n) {
        int p = 1, ans = 0;
        while(1) {
            if(p > n) {
                a[++pos] = ans;
                n -= ans;
                break;
            }
            if(n / p % 10) ans += p;
            p *= 10;
        }
    }
    printf("%d\n", pos);
    for(int i = 1; i <= pos; ++i) {
        printf("%d", a[i]);
        if(i == pos) printf("\n");
        else printf(" ");
    }
    return 0;
}
