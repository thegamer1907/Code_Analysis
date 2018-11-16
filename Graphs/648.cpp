#include<stdio.h>
void swap(char *ch , char *dh)
{
    char th;
    th=*ch;
    *ch=*dh;
    *dh=th;
}
int main()
{
    int n,t,i,j;
    scanf("%d%d",&n,&t);
    char q[n+1];
    scanf("%s",&q);
    for(i=0; i<t; i++)
    {
        for(j=0; j<n; j++)
        {
            if(q[j]=='B' && q[j+1]=='G')
            {
                swap(&q[j],&q[j+1]);
                j++;
            }
        }
    }
    printf("%s",q);
}