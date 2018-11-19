#include <bits/stdc++.h>
int a[16];

int n,k;
int main(){
    scanf("%d %d",&n,&k);
    int i,j;
    int s;
    int t;
    for(i=1 ; i<=n ; i++){
        s=0;
        for(j=0 ; j<k ; j++){
            scanf("%d",&t);
            if(t)s+=(1<<j);
        }
        a[s]=1;
    }
    if(a[0]){
        printf("YES");
        return 0;
    }
    for(i=1 ; i<16 ; i++){
        for(j=1 ; j<16 ; j++)
        if(a[i] && a[j] && !(i&j)){
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
