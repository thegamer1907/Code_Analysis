#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 10;
const int INF = 0x7fffffff;
typedef long long LL;
int n,a[maxn],b[maxn],minn=INF;
int main() {
    scanf("%d",&n);
    for (int i=0 ;i<n ;i++){
        scanf("%d",&a[i]);
        if (a[i]<minn) minn=a[i];
    }
    int flag=minn%n,temp=0;
    for (int i=0 ;i<n ;i++) a[i]-=minn;
    while(1) {
        if (a[flag]==0 || a[flag]-temp<=0) break;
         flag++,temp++;
         if (flag==n) flag=0;
    }
    printf("%d\n",flag+1);
    return 0;
}
