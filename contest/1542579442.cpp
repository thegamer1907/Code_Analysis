#include<bits/stdc++.h>

using namespace std;
int a[200000][20];
int vis[200000];
int Pow(int r,int w)
{
    if(w==0) return 1;
    for(int i=1;i<w;i++)
    {
        r*=2;
    }
    return r;
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    int r=0;
    for(int i=1;i<=n;i++)
    {
        int num=0;
        for(int j=1;j<=k;j++)
        {
            if(a[i][j]==1)
            {
                num=1;
            }
        }
        if(num==0) r=1;
    }
    int temp=0;
    for(int i=1;i<=k;i++)
    {
        temp+=a[1][i]*Pow(2,i-1);
    }
    vis[temp]=1;
    //printf("%d\n",temp);
    temp=0;
    for(int i=1;i<=k;i++)
    {
        temp+=Pow(2,i-1);
    }
   // printf("%d\n",temp);
    for(int i=2;i<=n;i++)
    {
        int num=0;
        for(int j=1;j<=k;j++)
        {
            num+=a[i][j]*Pow(2,j-1);
        }
        //printf("%d\n",num);
        vis[num]=1;
        for(int j=0;j<=temp;j++)
        {
            int flag=0;
            for(int l=1;l<=k;l++)
            {
                if(((num>>(l-1))&1)==((j>>(l-1))&1)&&((num>>(l-1))&1)==1)
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
             //   printf("%d\n",j);
                if(vis[j]) r=1;
            }
        }
    }
    if(r) printf("YES\n");
    else printf("NO\n");
}
