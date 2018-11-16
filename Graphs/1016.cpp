#include <stdio.h>
using namespace std;
typedef long long ll;
typedef unsigned long long llu;
typedef double lf;
typedef unsigned int uint;
typedef long double llf;

const int N_ = 30500;

int N, T, A[N_];

int main() {
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