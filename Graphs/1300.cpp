#include<stdio.h>
int main()
{
    int n,i,t;
    scanf("%d %d",&n,&t);
    int a[100005];
    int b[100005];
    for(i=1; i<n; i++)
    {
        b[i]=0;
    }
    for(i=1; i<=n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    int index=0;
    for(i=1; i<=n-1;)
    {
        b[index]=a[i]+i;
        i=b[index];
        index++;
    }
    for(i=0; i<index; i++)
    {
        if(b[i]==t)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}
