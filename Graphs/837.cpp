#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,t,j,k;
    char ch[100],ch1[100];
    char c;
    while(scanf("%d %d",&t,&n)==2)
    {
        scanf("%s",ch);
        for(i=1; i<=n; i++)
        {
            for(j=0; j<t; j++)
            {

                if(ch[j]=='B' && ch[j+1]=='G')
                {
                    c=ch[j];
                    ch[j]=ch[j+1];
                    ch[j+1]=c;
                    j++;

                }



            }
        }
        printf("%s\n",ch);
    }





    return 0;
}
