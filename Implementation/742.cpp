#include<stdio.h>
#include<string.h>
int main()
{
    int n,t,i,j;
    scanf("%d %d",&n,&t);
    char a[n+1];
    scanf("%s",a);
    for(i=0; i<t; i++)
    {
        for(j=0; j<strlen(a)-1; j++)
        {
            if(a[j]=='B' && a[j+1]=='G')
            {
                a[j]='G';
                a[j+1]='B';
                j++;
            }
        }
    }
    printf("%s",a);
    return 0;
}
