#include<bits/stdc++.h>
using namespace std;
const int MAXN=100005;
char a[MAXN];
int n,k,p1,p2,now,ans;
int main()
{
    scanf("%d %d",&n,&k);
    scanf("%s",a+1);
    now=0;
    p1=1;
    for(int i=1;i<=n;++i)
    {
        if(a[i]=='b')++now;
        while(now>k)
        {
            if(a[p1]=='b')--now;
            ++p1;
        }
        ans=max(ans,i-p1+1);
    }
    p1=1;
    now=0;
    for(int i=1;i<=n;++i)
    {
        if(a[i]=='a')++now;
        while(now>k)
        {
            if(a[p1]=='a')--now;
            ++p1;
        }
        ans=max(ans,i-p1+1);
    }
    printf("%d\n",ans);
    return 0;
}