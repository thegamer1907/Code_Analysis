#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[101],m,n,i,c=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if((a[i]>=a[m-1])&&(a[i]>0))
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;

}
