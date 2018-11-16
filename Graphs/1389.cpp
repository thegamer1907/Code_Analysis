#include<stdio.h>

int main()
{
    int n,t,i=1;
    scanf("%d %d",&n,&t);
    int a[n];
    for(int j=1;j<n;j++)
    {
        scanf("%d",&a[j]);
    }

    while(i<t)
        i=i+a[i];


    if(i==t)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
