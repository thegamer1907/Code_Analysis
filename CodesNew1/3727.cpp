#include<cstdio>
#include<algorithm>

using namespace std;

int a[105];

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int mmax=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
        mmax=max(mmax,a[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(mmax-a[i]);
    }

    if(m<=sum)
        printf("%d %d\n",mmax,mmax+m);
    else
        printf("%d %d\n",mmax+(m-sum-1)/n+1,mmax+m);

    return 0;
}
