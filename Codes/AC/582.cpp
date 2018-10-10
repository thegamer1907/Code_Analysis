#include<bits/stdc++.h>
using namespace std;
const int MAXN=5000005;
long long ans[MAXN];
int n,k;
void iterative_deepening(long long now,long long have,int deep,int maxdeep)
{
    if(deep==maxdeep)
    {
        ans[++n]=now*10+have;
        return;
    }
    if(deep==1)
    {
        for(int i=1;i<=9;++i)
        {
            iterative_deepening(i,have-i,deep+1,maxdeep);
        }
    }
    else
    {
        for(int i=0;have-i>=0;++i)
        {
            iterative_deepening(now*10+i,have-i,deep+1,maxdeep);
        }
    }
}
int main()
{
    scanf("%d",&k);
    int id=2;
    while(n<k)
    {
        iterative_deepening(0,10,1,id++);
    }
    sort(ans+1,ans+1+n);
    printf("%I64d\n",ans[k]);
    return 0;
}
