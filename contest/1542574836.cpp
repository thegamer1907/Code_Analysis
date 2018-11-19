#include <bits\stdc++.h>
using namespace std;
int cnt[20];
int main()
{
    int n,k,x;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        int tmp=1,t=0;
        for(int j=1;j<=k;j++)
        {
            scanf("%d",&x);
            t+=x*tmp;tmp*=2;}
            cnt[t]++;
    }
    int flag=0;
    if(cnt[0])printf("YES\n");
    else
    {
        int i,j;
        for(i=1;i<20;i++)
        {
            for(j=1;j<20;j++)
                if((i&j)==0)
                {
                    //printf("%d %d\n",i,j);
                    if(cnt[i]&&cnt[j])
                    flag=1;
                }
        }
        if(flag==1)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
