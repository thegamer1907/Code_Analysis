#include<stdio.h>
int main()
{
    int n,t,i,ch=0,ar[100009];
    scanf("%d %d",&n,&t);
    for(i=1; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=1; i<n;)
    {
        i=i+ar[i];
        if (i==t)
        {
            ch=1;
            printf("YES\n");
            break;
        }
    }
    if(ch==0)
    {
        printf("NO\n");
    }
    return 0;
}
