#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
int hehe[30],haha[5];
int main()
{
    int n,k;
    while(~scanf("%d%d",&n,&k))
    {
        memset(hehe,0,sizeof(hehe));
        for(int i=1; i<=n; i++)
        {
            int x,sum=0;
            for(int j=k-1; j>=0; j--)
            {
                scanf("%d",&x);
                if(x) sum+=(1<<j);
            }
            hehe[sum]=1;
        }
        int f=0;
        if(hehe[0]) f=1;
        for(int i=1; i<16&&!f; i++)
            for(int j=1; j<16&&!f; j++)
                if(i!=j&&hehe[i]&&hehe[j])
                {
                    memset(haha,0,sizeof(haha));
                    int x1=i,x2=j,kk=0;
                    while(x1)
                    {
                        haha[kk++]+=x1&1;
                        x1/=2;
                    }
                    kk=0;
                    while(x2)
                    {
                        haha[kk++]+=x2&1;
                        x2/=2;
                    }
                    if(haha[0]<2&&haha[1]<2&&haha[2]<2&&haha[3]<2)
                    {
                        f=1;
                    }
                }
        if(f) printf("YES\n");
        else printf("NO");
    }
    return 0;
}