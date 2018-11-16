#include<stdio.h>
int main()
{
    int n,t,i;
    scanf("%d %d",&n,&t);
    char S[n+1],c;
    scanf("%s",S);
    while(t--)
    {
        for(i=1;i<n;i++)
        {
            if(S[i]=='G' && S[i-1]=='B')
            {
                c=S[i-1];
                S[i-1]=S[i];
                S[i]=c;
                i++;
            }
        }
    }
    printf("%s\n",S);
    return 0;
}