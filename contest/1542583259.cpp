#include<stdio.h>
#include<string.h>
using namespace std;
int vis[2][2][2][2];
int b[150000][5];
int Slove(int a,int b,int c,int d)
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<2;k++)
            {
                for(int l=0;l<2;l++)
                {
                    if(vis[i][j][k][l]>0)
                    {
                        if(a+i<=1&&b+j<=1&&c+k<=1&&d+l<=1)return 1;
                    }
                }
            }
        }
    }
    return 0;
}
int main()
{
    int n,k;
    while(~scanf("%d%d",&n,&k))
    {
        int flag=0;
        memset(vis,0,sizeof(vis));
        for(int i=1;i<=n;i++)
        {
            int a[5];
            int temp=0;
            memset(a,0,sizeof(a));
            for(int j=0;j<k;j++)
            {
                scanf("%d",&a[j]);
                if(a[j]!=0)temp=1;
            }
            if(temp==0)flag=1;
            vis[a[0]][a[1]][a[2]][a[3]]++;
            b[i][0]=a[0];
            b[i][1]=a[1];
            b[i][2]=a[2];
            b[i][3]=a[3];
        }
        for(int i=1;i<=n;i++)
        {
            if(Slove(b[i][0],b[i][1],b[i][2],b[i][3])==1)flag=1;
        }
        if(flag==1)printf("YES\n");
        else printf("NO\n");
    }
}
