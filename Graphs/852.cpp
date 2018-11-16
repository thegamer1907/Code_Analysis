#include<stdio.h>

int line[30005];

int Find(int t,int n)
{
    int w;

    w=n+line[n];
    if(t<w)
    {
        return -1;
    }
    else if(t>w)
    {
        Find(t,w);
    }
    else
        return 1;
}

int main()
{
    int n;
    int t;

    while(scanf("%d%d",&n,&t)!=EOF)
    {

        for(int i=1;i<n;i++)
            scanf("%d",&line[i]);

        if(Find(t,1)==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
