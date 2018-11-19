#pragma comment(linker, "/STACK:1024000000,1024000000")
#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<queue>
#include<algorithm>
#include<stack>
#include<cstring>
#include<vector>
#include<list>
#include<bitset>
#include<set>
#include<map>
#include<time.h>
using namespace std;
#define LL long long
#define bug(x)  cout<<"bug"<<x<<endl;
const int N=1e4+10,M=1e6+10,inf=1e9+10,MOD=1e9+7;
const LL INF=1e18+10,mod=1e9+7;
const double eps=(1e-8),pi=(4*atan(1.0));

int flag[N];
int fuck(int x,int y)
{
    for(int i=0;i<4;i++)
    {
        if((1<<i)&x)
        {
            if((1<<i)&y)return 0;
        }
    }
    return 1;
}
int check(int x)
{
    if(x==0)return 1;
    for(int i=0;i<16;i++)
    {
        if(!flag[i])continue;
        if(fuck(i,x))return 1;
    }
    return 0;
}
int main()
{
    int n,k,ans=0;
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
    {
        int now=0;
        for(int j=0;j<k;j++)
        {
            int x;
            scanf("%d",&x);
            now+=(x<<j);
        }
        if(check(now))ans=1;
        flag[now]=1;
    }
    if(ans)printf("YES\n");
    else printf("NO\n");
    return 0;
}
