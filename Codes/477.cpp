#include<bits/stdc++.h>
using namespace std;

int i,j,k,l,n,m,x,t,a[100005],p;

int main()
{
    for (i=1;i<=20000000;i++)
    {
        t=0;
        for (x=i;x;x/=10)
        {
            t+=x%10;
            if (t>10) break;
        }
        if (t==10) a[++p]=i;
    }
    scanf("%d",&n);
    printf("%d",a[n]);
}
