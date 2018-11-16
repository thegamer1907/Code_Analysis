#include <cstdio>
#include <algorithm>
using namespace std;
int n,m,ans,a[100],b[100];
int main() {
    scanf("%d",&n); for (int i = 0;i < n;i++) scanf("%d",&a[i]);
    scanf("%d",&m); for (int i = 0;i < m;i++) scanf("%d",&b[i]);
    sort(a,a+n); sort(b,b+m);
    for (int i = 0,j = 0;i < n;i++) {for (;j < m && b[j] < a[i]-1;j++); if (j < m && b[j] <= a[i]+1) ans++,j++;}
    printf("%d\n",ans);
    return 0;
}
