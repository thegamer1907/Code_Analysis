#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
struct G
{
    char a[2];
}c[110];
int main()
{
    char b[2];
    while(~scanf("%s",b))
    {
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%s",c[i].a);
         //   printf("%s\n",c[i].a);
        }

        int flag=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                //printf("i=%d   j=%d\n",i,j);
                if((b[0]==c[i].a[0]&&b[1]==c[i].a[1])||(b[1]==c[i].a[0]&&b[0]==c[j].a[1]))
                {
                   printf("YES\n");
                   flag=0;
                   break;
                }
            }
            if(flag==0)
            {
                break;
            }
        }
        if(flag)
        {
            printf("NO\n");
        }
    }
    return 0;
}
