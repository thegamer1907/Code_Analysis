#include<bits/stdc++.h>
using namespace std;
const int N=100004;
int h[N][6];
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int i,j;
    for(i=1;i<=n;i++)
        for(j=1;j<=k;j++)
            scanf("%d",&h[i][j]);

    if(k==1)
    {
        int f=0;
        for(i=1;i<=n;i++)
        {
            if(h[i][1]==0)
            {
                f=1;
                break;
            }
        }
        if(f)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else if(k==2)
    {
        int f=0,g=0;
        for(i=1;i<=n;i++)
        {
            if(h[i][1]==0)
                f=1;
            if(h[i][2]==0)
                g=1;

        }
        if(f && g)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else if(k==3)
    {
        int f=0,g=0;
        for(i=1;i<=n;i++)
        {
            if(h[i][1]==0)
                f=1;
            if(h[i][2]==0 && h[i][3]==0)
                g=1;
        }
        if(f && g)
        {
            printf("YES\n");
            return 0;
        }
        f=0,g=0;
        for(i=1;i<=n;i++)
        {
            if(h[i][2]==0)
                f=1;
            if(h[i][1]==0 && h[i][3]==0)
                g=1;
        }
        if(f && g)
        {
            printf("YES\n");
            return 0;
        }
        f=0,g=0;
        for(i=1;i<=n;i++)
        {
            if(h[i][3]==0)
                f=1;
            if(h[i][1]==0 && h[i][2]==0)
                g=1;
        }
        if(f && g)
        {
            printf("YES\n");
            return 0;
        }
        printf("NO\n");
    }
    else
    {
        int f=0,g=0;
        for(i=1;i<=n;i++)
        {
            if(h[i][1]==0)
                f=1;
            if(h[i][2]==0 && h[i][3]==0 && h[i][4]==0)
                g=1;
        }
        if(f && g)
        {
            printf("YES\n");
            return 0;
        }
        f=0,g=0;
        for(i=1;i<=n;i++)
        {
            if(h[i][2]==0)
                f=1;
            if(h[i][1]==0 && h[i][3]==0 && h[i][4]==0)
                g=1;
        }
        if(f && g)
        {
            printf("YES\n");
            return 0;
        }
        f=0,g=0;
        for(i=1;i<=n;i++)
        {
            if(h[i][3]==0)
                f=1;
            if(h[i][2]==0 && h[i][1]==0 && h[i][4]==0)
                g=1;
        }
        if(f && g)
        {
            printf("YES\n");
            return 0;
        }
        f=0,g=0;
        for(i=1;i<=n;i++)
        {
            if(h[i][4]==0)
                f=1;
            if(h[i][2]==0 && h[i][3]==0 && h[i][1]==0)
                g=1;
        }
        if(f && g)
        {
            printf("YES\n");
            return 0;
        }
        f=0,g=0;
        for(i=1;i<=n;i++)
        {
            if(h[i][1]==0 && h[i][2]==0)
                f=1;
            if(h[i][3]==0 && h[i][4]==0)
                g=1;
        }
        if(f && g)
        {
            printf("YES\n");
            return 0;
        }
         f=0,g=0;
        for(i=1;i<=n;i++)
        {
            if(h[i][1]==0 && h[i][3]==0)
                f=1;
            if(h[i][2]==0 && h[i][4]==0)
                g=1;
        }
        if(f && g)
        {
            printf("YES\n");
            return 0;
        }
         f=0,g=0;
        for(i=1;i<=n;i++)
        {
            if(h[i][2]==0 && h[i][3]==0)
                f=1;
            if(h[i][1]==0 && h[i][4]==0)
                g=1;
        }
        if(f && g)
        {
            printf("YES\n");
            return 0;
        }
        f=0,g=0;
        for(i=1;i<=n;i++)
        {
            if(h[i][1]==0)
                f=1;
            if(h[i][2]==0 && h[i][3]==0 && h[i][4]==0)
                g=1;
        }
        if( f &&g)
        {
            printf("YES\n");
            return 0;
        }
         f=0,g=0;
        for(i=1;i<=n;i++)
        {
            if(h[i][2]==0)
                f=1;
            if(h[i][1]==0 && h[i][3]==0 && h[i][4]==0)
                g=1;
        }
        if( f &&g)
        {
            printf("YES\n");
            return 0;
        }
         f=0,g=0;
        for(i=1;i<=n;i++)
        {
            if(h[i][3]==0)
                f=1;
            if(h[i][2]==0 && h[i][1]==0 && h[i][4]==0)
                g=1;
        }
        if( f &&g)
        {
            printf("YES\n");
            return 0;
        }
         f=0,g=0;
        for(i=1;i<=n;i++)
        {
            if(h[i][4]==0)
                f=1;
            if(h[i][2]==0 && h[i][3]==0 && h[i][1]==0)
                g=1;
        }
        if( f &&g)
        {
            printf("YES\n");
            return 0;
        }
        printf("NO\n");
        return 0;
    }

}
