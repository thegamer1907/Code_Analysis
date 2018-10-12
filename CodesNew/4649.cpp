#include<cstdio>
#include<cctype>
#include<algorithm>
using namespace std;
int read() {
    int x=0,f=1;
    char c=getchar();
    for (;!isdigit(c);c=getchar()) if (c=='-') f=-1;
    for (;isdigit(c);c=getchar()) x=x*10+c-'0';
    return x*f;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
#endif
    int n=read(),ans=0;
    static int a[500005];
    for (int i=1;i<=n;++i) a[i]=read();
    sort(a+1,a+n+1);
    for (int i=1,j=(n>>1)+1;i<=(n>>1) && j<=n;++i) {
        for (;j<n && a[i]*2>a[j];++j);
        if (a[i]*2<=a[j]) ++ans,++j;
    }
    printf("%d\n",n-ans);
    return 0;
}