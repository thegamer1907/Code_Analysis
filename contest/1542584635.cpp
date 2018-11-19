//created by missever

#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int,int> P;

const int mod = 1e9 + 7;
const int maxn = 1e5 + 5;

int f[4];

int main() {
#ifdef CX_TEST
    freopen("E:\\program--GG\\test_in.txt", "r", stdin);
#endif
    int n,m,k,i,j,x,d;
    scanf("%d%d",&n,&k);
    for(i = m = 0; i < n; i++) {
        for(j = x = 0; j < k; j++) {
            scanf("%d",&d);
            x = x << 1 | d;
        }
        m |= 1 << x;
    }
    bool vis = 0;
    for(x = m; x; x = (x - 1) & m) {
        memset(f,0,sizeof(f));
        for(i = d = 0; i < (1 << k); i++) {
            if((x >> i) & 1) {
                d++;
                for(j = 0; j < k; j++) {
                    if((i >> j) & 1) f[j]++;
                }
            }
        }
        for(j = 0; j < k; j++) {
            if(f[j] * 2 > d) break;
        }
        if(j == k) vis = 1;
    }
    if(vis) puts("YES");
    else puts("NO");
    return 0;
}
