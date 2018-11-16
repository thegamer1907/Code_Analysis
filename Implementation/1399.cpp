#include<stdio.h>
int main()
{
    int n,t,i,j;
    char a[50];
    scanf("%d%d",&n,&t);

    scanf("%s",a);
    while(t!=0)
    {
        i=0;
        while(i!=n)
        {
            if((a[i]=='B')&&(a[i+1]=='G'))
            {
                a[i]='G';
                a[i+1]='B';
                //printf("%d %d",a[i],a[i+1]);
                i=i+2;
            }
            else
                ++i;
        }
        --t;
    }
    printf("%s\n",a);
    return 0;
}
