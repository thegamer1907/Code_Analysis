#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#include<algorithm>
#include<vector>
#include<map>
#include<cstring>
#include<cmath>
using namespace std;

int a[17];

int main()
{
    int n,k;
    while(~scanf("%d%d",&n,&k))
    {
        memset(a,0,sizeof a);
        for(int i=0; i<n; i++)
        {
            int x=0;

            for(int i=0; i<k; i++)
            {
                int y;
                scanf("%d",&y);
                x+=(y<<i);
            }
            a[x]=1;


        }
        if(a[0])
        {
            printf("YES\n");
            continue;
        }
        int flag=0;
        for(int i=0; i<(1<<k); i++)
            for(int j=0; j<(1<<k); j++)
            {
                if(i==j)
                    continue;
                if(a[i]==0||a[j]==0)
                    continue;
                if((i&j)==0)
                {
                    flag=1;
                    break;
                }

            }

        if(flag)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
