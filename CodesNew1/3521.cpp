#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int n,m,a[105];
    while(~scanf("%d %d",&n,&m))
    {
         int sum=0;
         for(int i=1;i<=n;i++)
         {
             scanf("%d",&a[i]);
             sum+=a[i];
         }
         sort(a+1,a+1+n);
         int  t,tt;
         sum+=m;
         t=sum/n;
         tt=sum%n;
         if(t<a[n])
         {
             printf("%d %d\n",a[n],a[n]+m);
         }
         else
         {
             if(tt!=0)
                t++;
             printf("%d %d\n",t,a[n]+m);
         }
    }
    return 0;
}





