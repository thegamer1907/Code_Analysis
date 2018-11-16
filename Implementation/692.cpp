#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,k;
    int a[51];
    int num=0;
    scanf("%d %d",&n,&k);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]>=a[k-1]&&a[i]!=0)
        {
            num++;
        }
    }
    printf("%d\n",num);
    return 0;
}