#include<stdio.h>
int main()
{
    int i,j,n,t;
    char x[60];
    scanf("%d %d",&n,&t);
    getchar();
    gets(x);
    while(t)
    {
        for(i=0;i<n;i++)
        {
            if(x[i]=='B'&&x[i+1]=='G')
            {
                j=x[i];
                x[i]=x[i+1];
                x[i+1]=j;
                i=i+1;
            }
        }
        t--;
    }
    puts(x);
    return 0;
}
