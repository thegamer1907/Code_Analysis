#include <bits/stdc++.h>
#define ld long double

using namespace std;
int a[200],b[200],c[200],d[200], ans,x,n,tot;
int main() {
    cin>>n>>x;
    for (int i=1;i<=n;++i) {
        scanf("%d",&d[i]);
        if (d[i]&1) a[i]=a[i-1]+1,b[i]=b[i-1]; else a[i]=a[i-1],b[i]=b[i-1]+1;
    }
    for (int i=2;i<=n;i+=2) {
        if (a[i]==b[i]) {
            c[++tot]=abs(d[i]-d[i+1]);
        }
    }
    tot--;
    sort(c+1,c+1+tot);
    int i=0;
    while (ans+c[i+1]<=x&&i<tot) {
        i++;
        ans+=c[i];
    }
    printf("%d\n",i);
    return 0;
}