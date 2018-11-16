#include <cstdio>

int main(void){
    int n,k,a,b,ile=0;
    scanf("%d%d",&n,&k);
    b=1000;
    for (int i = 0; i < n; i++) {
        scanf("%d",&a);
        if (a<1) break;
        if (a == b){
            ile++;
        }
        else if (k > 0) {
            ile++;
            b=a;
        } else break;
        k--;
    }
    printf("%d\n",ile);
    return 0;
}

