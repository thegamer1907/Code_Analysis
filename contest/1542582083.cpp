
#include<bits/stdc++.h>
using  namespace std;
const int INF=1e9+10;
const int MOD=1e9+7;
const int N=1e6+10;
int nyist[30],v[5];
int main()
{
    int n,k;
    while(~scanf("%d%d",&n,&k))
    {
        memset(nyist,0,sizeof(nyist));
        memset(v,0,sizeof(v));
        for(int i=1; i<=n; i++)
        {
            int x,sum=0;
            for(int j=k-1; j>=0; j--)
            {
                scanf("%d",&x);
                if(x) sum+=(1<<j);
            }
            nyist[sum]=1;
        }
        int flag=0;
        if(nyist[0]) flag=1;
        for(int i=1; i<16&&!flag; i++)
            for(int j=1; j<16&&!flag; j++)
                if(i!=j&&nyist[i]&&nyist[j])
                {
                    memset(v,0,sizeof(v));
                    int x1=i,x2=j,kk=0;
                    while(x1)
                    {
                        v[kk++]+=x1&1;
                        x1/=2;
                    }
                    kk=0;
                    while(x2)
                    {
                        v[kk++]+=x2&1;
                        x2/=2;
                    }
                    if(v[0]<2&&v[1]<2&&v[2]<2&&v[3]<2)
                    {
                        flag=1;
                    }
                }
        if(flag) puts("YES");
        else puts("NO");
    }
    return 0;
}

