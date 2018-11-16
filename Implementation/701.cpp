#include<stdio.h>
int main()
{
    int n,k,ara[50],count=0;
    scanf("%d%d",&n,&k);
    for(int i=0; i<n; i++){
        scanf("%d", &ara[i]);
    }
    for(int i=0; i<n; i++){
        if(ara[k-1]==0 && ara[i]>ara[k-1]) count++;
        else if(ara[k-1]!=0 && ara[i]>=ara[k-1]) count++;
    }
    printf("%d", count);
}
