#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int a[20];
int main() {
    memset(a,0,sizeof(a));
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++) {
        int num=0;
        for(int x,i=0;i<m;i++) {
            scanf("%d",&x);
            num+=(x<<i);
        }
        a[num]++;
    }
 /*   for(int i=0;i<16;i++) printf("%d ",a[i]);
        puts("");*/
    if(a[0]>0) return 0*puts("YES");
    for(int i=1;i<16;i++) {
        for(int j=1;j<16;j++) {
            if(a[i]>0&&a[j]>0&&((i&j)==0)) return 0*puts("YES");
        }
    }
    return 0*puts("NO");
}