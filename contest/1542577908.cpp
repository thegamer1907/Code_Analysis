#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
typedef long long LL;
const int MAXN = 100000;
const LL INFLL = 0x3f3f3f3f3f3f3f3fll;
LL dpAA[MAXN+10], dpBB[MAXN+10], cst;
int cnt[MAXN+10], a[MAXN+10], ll, rr;
void INC(int a){
    cst -= 1ll*(cnt[a]-1)*cnt[a];
    cnt[a]++;
    cst += 1ll*(cnt[a]-1)*cnt[a];
}
void DEC(int a){
    cst -= 1ll*(cnt[a]-1)*cnt[a];
    cnt[a]--;
    cst += 1ll*(cnt[a]-1)*cnt[a];
}
void Calc(LL* dp, LL* tar, int L, int R, int l, int r){ //l,r Part L,R decide_part
    if(L > R) return ;
    int mid=(L+R)>>1;
    int cr = min(r, mid-1);
    LL best = INFLL;
    int pos = -1;
    while(ll>cr+1){
        ll--;
        INC(a[ll]);
    }
    while(rr<mid){
        rr++;
        INC(a[rr]);
    }
    while(ll<=cr){
        DEC(a[ll]);
        ll++;
    }
    while(rr>mid){
        DEC(a[rr]);
        rr--;
    }
    for(int i=cr;i>=l;i--){
        if(cst+dp[i] < best){
            best = cst+dp[i];
            pos = i;
        }
        ll--;
        INC(a[ll]);
    }
    tar[mid] = best;
    Calc(dp, tar, L, mid-1, l, pos);
    Calc(dp, tar, mid+1, R, pos, r);
}
int main(){
    int n, k;
    scanf("%d%d", &n, &k);
    for(int i=1;i<=n;i++)
        scanf("%d", &a[i]);
    ll = rr = 0;
    cst = 0;
    cnt[0] = 1;
    memset(dpAA, 0x3f, sizeof dpAA);
    dpAA[0] = 0;
    LL* dpA = dpAA;
    LL* dpB = dpBB;
    for(int i=1;i<=k;i++){
        swap(dpA, dpB);
        Calc(dpB, dpA, i, n, i-1, n);
    }
    printf("%I64d\n", dpA[n]/2);

    return 0;
}
