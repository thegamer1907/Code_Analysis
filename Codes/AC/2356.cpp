#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=10000000;
int coun[N+5],pri[N/10],n,m;
bool is[N+5];
LL num[N/10],sum[N/10];
void makeprim()
{
    for(int i=2;i<=N;i++)
        if(!is[i])
        {
            pri[++m]=i;
            for(int j=i;j<=N;j+=i)
                is[j]=true,num[m]+=coun[j];
        }
    for(int i=1;i<=m;i++)
        sum[i]=sum[i-1]+num[i];
}
int main()
{
    int x;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",&x),coun[x]++;
        makeprim();
        int TA,l,r,t1,t2;
    scanf("%d",&TA);
    while(TA--)
    {
        scanf("%d%d",&l,&r);
        if(l>=N)
        {
            puts("0");
            continue;
        }
        if(r>=N)r=N;
        t1=lower_bound(pri+1,pri+m+1,r+1)-pri-1;
        t2=lower_bound(pri+1,pri+m+1,l)-pri-1;
       // cout<<t1<<" "<<t2<<endl;
        LL ans=sum[t1]-sum[t2];
        printf("%I64d\n",ans);
    }
}
