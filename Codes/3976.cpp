#include<cstdio>
#define maxn 100005
int a[maxn],b[maxn],c[maxn];
int x,n,m,k,l,r;
int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++){
        c[i]=i;
        for(int j=1;j<=m;j++){
            scanf("%d",&x);
            if(x<a[j])  b[j]=i;
            a[j]=x;
            if(b[j]<c[i])   c[i]=b[j];
        }
    }
    scanf("%d",&k);
    while(k--){
        scanf("%d%d",&l,&r);
        if(c[r]<=l) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}