#include<cstdio>
#include<algorithm>
#include<iostream>

using namespace std;

int main()
{
    int n,k,i,c=0;
    int a[101];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if((a[i]>=a[k-1]) && (a[i]>0))
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}