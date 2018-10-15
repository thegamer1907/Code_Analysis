#include<bits/stdc++.h>
using namespace std;

int main() {
//    freopen("benches.in","r",stdin);
    int c,c2;
    int n,m;
    int sum = 0;
    int maxi = 0;
    scanf("%d%d",&n,&m);
    for (c=0;c<n;c++) {
        int x;
        scanf("%d",&x);
        maxi = max(maxi, x);
        sum += x;
    }
    printf("%d %d\n", max(maxi, (sum + m) / n + !!((sum + m) % n)), maxi + m);
    return 0;
}
