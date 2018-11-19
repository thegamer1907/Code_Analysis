#include <cstdio>
int book[27], n, k, tmp, t;
int main() {
    scanf("%d%d", &n, &k);
    while(tmp = 0, n--) {
        for(int j=0 ; j<k ; j++) scanf("%d", &t), tmp |= (t<<j);
        book[tmp]++;
    }
    for(int i=0 ; i<16 ; i++) for(int j=0 ; j<16 ; j++) if((i&j) == 0 && book[i] && book[j]) return 0*printf("YES\n");
    return 0*printf("NO\n");
}