#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d %d\n",&n,&k);
    if(k<=n&&((1<=k&&k<=50)&&(1<=n&&n<=50)))
    {
        int an[50],i=0,sum=0,m=n;
        while(m--){
            scanf("%d",&an[i]);
            i++;}
        for(i=0;i<n;i++)
        {
            if(an[i]>=an[k-1])
            if(an[i]>0){sum++;}
        }
        printf("%d",sum);
    }
return 0;
}
