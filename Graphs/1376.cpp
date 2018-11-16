#include <stdio.h>
const int N_ = 30500;

int N, T, A[N_];
int main(int argc, char **argv)
{
  scanf("%d%d", &N, &T);
    for(int i = 1; i < N; i++) {
        scanf("%d", &A[i]);
    }
    A[N] = 1;
    for(int cur = 1; cur <= N; cur += A[cur]) {
        if(cur == T) return 0 & puts("YES");
    }
    
    puts("NO");
    return 0;
}
