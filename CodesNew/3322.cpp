#include <iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
typedef long long ll;
int main()
{
    int i,j,n,m,a[100010],ans1,ans2=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
        ans2=max(a[i],ans2);
    }
    int maxx=ans2;
    ans2+=m;
    for(i=0;i<=n-1;i++)
        m+=a[i];
    if(m%n==0)
        ans1=m/n;
    else
        ans1=m/n+1;
    ans1=max(ans1,maxx);
    printf("%d %d\n",ans1,ans2);





}
