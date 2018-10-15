#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ma=0;
    int sum=0;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        int a;
        scanf("%d",&a);
        ma=max(ma,a);
        sum+=a;
    }
    if(m-(ma*n-sum)<=0)
    {
        printf("%d %d\n",ma,ma+m);
        return 0;
    }

    int t=(m-(ma*n-sum))%n==0? (ma+(m-(ma*n-sum))/n) : ((m-(ma*n-sum))/n+1+ma);
    printf("%d %d\n",max(t,ma),ma+m);
    return 0;
}
