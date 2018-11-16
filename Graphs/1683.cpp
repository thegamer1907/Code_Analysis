#include <cstdio>
int n,t,a[30000+1];
int main(){
    std::scanf("%d %d",&n,&t);
    for(int i=1;i<n;++i) std::scanf("%d",&a[i]),a[i]+=i;
    int u=1;while(a[u]!=t&&u!=n)u=a[u];
    std::puts((a[u]==t)?"YES":"NO");
}