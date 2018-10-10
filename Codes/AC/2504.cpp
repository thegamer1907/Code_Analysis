#include<iostream>
#include<cstdio>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long  LL;
const int N=10000000;
bool is[N+10];
int pri[800000],m=0,n,p1,p2,p;
LL sum[800000],num[800000];
int main()
{
    for(int i=2;i<=N;i++)
    {
        if(!is[i])
        {
            pri[++m]=i;
            for(int j=i+i;j<=N;j+=i)
                is[j]=true;
        }
    }
//    while(scanf("%d",&n)!=EOF)
//    {
//        int pp=lower_bound(pri+1,pri+m+1,n)-pri;
//        cout<<pp<<endl;
//    }
    while(scanf("%d",&n)!=EOF)
    {
        int x,y;
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&x);
            for(int j=1;pri[j]*pri[j]<=x;j++)
            {
                if(x%pri[j]==0)
                {
                    num[j]++;
                    while(x%pri[j]==0)
                    {
                        x/=pri[j];
                    }
                }
            }
            if(x!=1)
            {
              p=lower_bound(pri+1,pri+m+1,x)-pri;
              num[p]++;
            }
        }
        sum[0]=0;
        for(int i=1;i<=m;i++)
            sum[i]=sum[i-1]+num[i];
            int TA;
        scanf("%d",&TA);
        while(TA--)
        {
            scanf("%d%d",&x,&y);
            if(x>pri[m])
            {
                printf("0\n");
                continue;
            }
            if(y>pri[m])
              y=pri[m];
             p1=lower_bound(pri+1,pri+m+1,x)-pri;
             p2=lower_bound(pri+1,pri+m+1,y)-pri;
             p1--;
             if(pri[p2]>y)p2--;
             LL ans=max((LL)0,sum[p2]-sum[p1]);
             printf("%I64d\n",ans);
        }
    }
    return 0;
}
