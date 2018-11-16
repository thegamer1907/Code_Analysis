#include<stdio.h>
int main()
{
    int a[51],j,i,k,n,y=0,u;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++){
        if(a[i]!=0)y++;
        if(a[i]==0){
            printf("%d",y);
            return 0;
        }
    }
    if(a[k]==a[k-1]){

        for(i=k;i<n;i++){
            if(a[i]==a[k-1])y++;
        }

    }
    printf("%d",y);
    return 0;
}
