#include <stdio.h>
#include <string.h>
int main(void)
{
    int n,m,a[105],i,cnt=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]>=a[m-1]&&a[i]>0)cnt++;
    }
    printf("%d",cnt);
    return 0;
}
