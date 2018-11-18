#include <cstdio>
#include <algorithm>
#include <cstring>
#define LL long long
#define CMin(A, B) A < B ? A : B
using namespace std;
const LL MaxN = 110000;
const LL Inf = 2147483647;
LL B[MaxN], K, N;
LL F[MaxN][50];
LL S[MaxN];
LL Ans = 0;
LL Le = 0, Ri = 0;
LL Calc(LL l, LL r) {
    while(Ri < r) {
    	Ri += 1;
        Ans += (LL)(B[S[Ri]]);
        B[S[Ri]] += 1;
    }
    while(Ri > r) {
    	B[S[Ri]] -= 1;
        Ans -= (LL)(B[S[Ri]]);
        Ri -= 1;
    }
    while(Le < l) {
    	B[S[Le]] -= 1;
        Ans -= (LL)(B[S[Le]]);
        Le += 1;
    }
    while(Le > l) {
    	Le -= 1;
        Ans += (LL)(B[S[Le]]);
        B[S[Le]] += 1;
    }
    return Ans;
}
void Slove(LL l, LL r, LL L, LL R, LL Now) {
    if(l > r) return;
    LL Mid = (l + r) / 2;
    LL Min = CMin(Mid, R);
    LL C = 0;
    for(LL i = L; i <= Min; i++) {
        LL M = Calc(i, Mid);
        if(F[i - 1][Now - 1] + M <= F[Mid][Now]) {
            F[Mid][Now] = F[i - 1][Now - 1] + M;
            C = i;
        }
    }
    if(l != r) {
        Slove(l, Mid - 1, L, C, Now);
        Slove(Mid + 1, r, C, R, Now);
    }
}
int main() {
    Le = 1, Ri = 0;
    scanf("%lld%lld", &N, &K);
    F[0][0] = 0;
    for(LL i = 1; i <= N; i++) scanf("%lld", &S[i]);
    memset(F, 0x2f, sizeof(F));
    memset(B, 0, sizeof(B));
    for(LL i = 1; i <= N; i++) F[i][1] = Calc(1, i);
    for(LL i = 2; i <= K; i++) {
    //	memset(B, 0, sizeof(B));
        Slove(1, N, 1, N, i);
    }
    printf("%lld\n", F[N][K]);
}