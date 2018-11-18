#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <stack>
#include <bitset>
using namespace std;
typedef long long LL;
LL gi () {
    LL ret=0; char ch=getchar();
    while((ch<'0' || ch>'9') && ch!='-') ch=getchar();
    char c=ch=='-'?getchar():ch;
    while(c>='0' && c<='9') ret=ret*10+c-'0',c=getchar();
    return ch=='-'?-ret:ret;
}
const int N = 100000 + 10;
int n,m,a[N],cl,cr;
LL cans,b[N],dp[2][N],*f,*g;
void add (int x) {
    cans -= b[a[x]] * (b[a[x]]-1) / 2;
    b[a[x]] += 1;
    cans += b[a[x]] * (b[a[x]]-1) / 2;
}
void del (int x) {
    cans -= b[a[x]] * (b[a[x]]-1) / 2;
    b[a[x]] -= 1;
    cans += b[a[x]] * (b[a[x]]-1) / 2;
}
void move (int l,int r) {
    while(cl>l) --cl, add(cl);
    while(cr<r) ++cr, add(cr);
    while(cl<l) del(cl), ++cl;
    while(cr>r) del(cr), --cr;
}
void solve (int l,int r,int L,int R) {
    if(l>r) return;
    int m = (l+r) >> 1, ed = min(R,m), M;
    f[m] = 1e18;
    for(int i=L;i<=ed;i+=1) {
        move(i+1,m);
        if(cans + g[i] < f[m]) f[m] = cans + g[i], M = i;
    }
    solve(l,m-1,L,M); solve(m+1,r,M,R);
}
int main () {
    n = gi(); m = gi();
    for(int i=1;i<=n;i+=1) a[i] = gi();
    f = dp[0]; g = dp[1];
    cl = cr = 1; b[a[1]] = 1; cans = 0;
    memset(f,60,sizeof dp[0]); f[0] = 0;
    for(int i=1;i<=m;i+=1) {
        swap(f,g);
        solve(1,n,0,n-1);
    }
    printf("%I64d",f[n]);
    return 0;
}
