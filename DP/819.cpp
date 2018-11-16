#include <stdio.h>
int n,num[105],sum1[10000],i,size,dici=0,before=0,bet,I,new1,max;
int main()
{
    scanf("%d",&n);
    if(n>=1&&n<=100)
    {
        for(i=0;i<n;i++){scanf("%d",&num[i]);if(num[i]==1||num[i]==0);else goto end;}

        for(i=0;i<n;i++)if(num[i]==1)before++;
        for(size=1;size<=n;size++)

            for(i=0;i<=n-size;i++)
            {
                new1=0;
                I=i;
                bet=size;
                while(bet--)
                {
                    if(num[I]==0)new1++;
                    else new1--;
                    I++;
                }
                sum1[dici]=before+new1;
                dici++;
            }

        for(i=0,max=sum1[0];i<dici;i++)if(sum1[i]>=max)max=sum1[i];
        printf("%d",max);
    }end:;
    return 0;
}
