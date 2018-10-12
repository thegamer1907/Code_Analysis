#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
typedef long long ll;
using namespace std;
int main()
{
    int n,m,a[100101],minn=0x3f3f3f,maxx=0,i,ans1=0,ans2=0;
    scanf("%d%d",&n,&m);
    for(i=0; i<=n-1; i++)
    {
        scanf("%d",&a[i]);
        maxx=max(a[i],maxx);
    }
    ans2=maxx+m;
    int sum=0;
    for(i=0;i<=n-1;i++)
    {
        sum+=maxx-a[i];
    }
    if(sum>=m)
        ans1=maxx;
    else
    {
        int t=m-sum;
        if(t%n==0)
            ans1=maxx+t/n;
        else
            ans1=maxx+t/n+1;
    }
    printf("%d %d\n",ans1,ans2);
}
