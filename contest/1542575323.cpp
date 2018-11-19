#include <iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
#define maxn 27
int a[maxn];
int main()
{
    int n,k;
    int t,mi,z;
    while(~scanf("%d %d",&n,&k))
    {
//        printf("%d\n",1<<k);
        memset(a,0,sizeof(a));
        for(int i=0; i<n; i++)
        {
            t=0,mi=1<<(k-1);
            for(int j=0; j<k; j++)
            {
                scanf("%d",&z);
                t+=z*mi;
                mi/=2;
            }
            a[t]++;
        }
//        for(int i=0;i<(1<<k);i++)
//            printf("%d ",a[i]);
//        printf("\n");
//        printf("---------------------\n");
//        for(int i=0;i<(1<<k);i++)
//            if(a[i]!=0)
//            printf("%d ",a[i]);
//        printf("\n");
        bool flag=false;
        for(int i=0; i<(1<<k); i++)
        {
            if(a[i]!=0)
            {
                for(int j=0; j<(1<<k); j++)
                {
                    if(a[j]!=0&&((i&j)==0))
                    {
                        flag=true;
                        printf("YES\n");
                        break;
                    }
                }
            }
            if(flag) break;
        }
        if(!flag)
            printf("NO\n");
    }
    return 0;
}
