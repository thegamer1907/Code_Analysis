#include "bits/stdc++.h"

using namespace std;

int n,m,a[105],maxn=-1,last;

int main(){
    scanf("%d%d",&n,&m);
    for(register int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        maxn=max(maxn,a[i]);
    }
    for(register int i=1;i<=n;i++){
        last+=maxn-a[i];
    }
    if(m<=last){
        printf("%d %d",maxn,maxn+m);
        return 0;
    }
    int mm=m-last;
    int ml=mm-mm/n*n;
    printf("%d %d",maxn+mm/n+(ml!=0),maxn+m);
}