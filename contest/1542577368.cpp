#include <bits/stdc++.h>
using namespace std;
int n,k,cnt[16];

int main() {
    scanf("%d%d",&n,&k);
    for (int i=1;i<=n;++i) {
        int t=0;
        for (int j=1;j<=k;++j) {
            int x;
            scanf("%d",&x);
            t=(t<<1)+x;
        }
        cnt[t]++;
    }
    for (int i=0;i<16;++i) for (int j=i;j<16;++j) if (cnt[i] && cnt[j] && ((i&j)==0)) return puts("YES"),0;
    puts("NO");
    return 0;
}