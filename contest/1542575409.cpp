//created by missever

#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int,int> P;

const int mod = 1e9 + 7;
const int maxn = 1e5 + 5;

int a[maxn],d[maxn];
LL f[21][maxn],s = 0;

void solve(int l,int r,int ll,int rr,LL fa[],LL fb[]) {
    if(l > r) return;
    int i,u = ll,mid = (l + r) >> 1;
    for(i = l; i <= mid; i++) s += d[a[i]]++;
    LL m = s + fa[ll - 1];
    for(i = ll; i < min(rr,mid); i++) {
        s -= --d[a[i]];
        if(s + fa[i] < m) {
            m = s + fa[i];
            u = i + 1;
        }
    }
    fb[mid] = m;
    for(i = ll; i < min(rr,mid); i++) s += d[a[i]]++;
    for(i = l; i <= mid; i++) s -= --d[a[i]];
    solve(l,mid - 1,ll,u,fa,fb);
    for(i = l; i <= mid; i++) s += d[a[i]]++;
    for(i = ll; i < u; i++) s -= --d[a[i]];
    solve(mid + 1,r,u,rr,fa,fb);
    for(i = l; i <= mid; i++) s -= --d[a[i]];
    for(i = ll; i < u; i++) s += d[a[i]]++;
}

int main() {
#ifdef CX_TEST
    freopen("E:\\program--GG\\test_in.txt", "r", stdin);
#endif
    int n,k,i;
    scanf("%d%d",&n,&k);
    for(i = 1; i <= n; i++) {
        scanf("%d",&a[i]);
        s += d[a[i]]++;
        f[0][i] = s;
    }
    for(i = 1; i < k; i++) {
        s = 0;
        memset(d,0,sizeof(d));
        solve(1,n,1,n,f[i - 1],f[i]);
    }
    printf("%lld\n",f[k - 1][n]);
    return 0;
}
