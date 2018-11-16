#include <cstdio>
#define MOD 1000000007

int main (){
    int n, a = 1, b = 0, c = 0, d = 0, aa, bb, cc, dd;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        aa = ((b + c) % MOD + d) % MOD;
        bb = ((a + c) % MOD + d) % MOD;
        cc = ((a + b) % MOD + d) % MOD;
        dd = ((a + b) % MOD + c) % MOD;
        a = aa;
        b = bb;
        c = cc;
        d = dd;
    }
    printf("%d\n", a);
    return 0;
}