#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define N 100010
int a[N],b[N];
int main()
{
    int i,j,k,n,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<i)
            b[i]=0;
        else
            b[i]=(a[i]-i)/n+1;
    }
    s=1000000000;
    j=1000000000;
    for(i=1;i<=n;i++)
    if(b[i]<j)
    {
        s=i;
        j=b[i];
    }
    printf("%d\n",s);
    return 0;
}
