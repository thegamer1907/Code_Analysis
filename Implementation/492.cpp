#include <stdlib.h>
#include <stdio.h>
int k,n,t[100];
int main()
{
    scanf("%d %d",&k,&n);
    for(int i=0;i<k;i++){
        scanf("%d",&t[i]);
    }
    int j=0;
    for(int i=0;i<k;i++){
        if (t[i]>=t[n-1]&&t[i]>0)
        j++;
    }
    printf("%d",j);

    return 0;
}