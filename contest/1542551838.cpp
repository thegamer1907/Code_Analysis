#include<cstdio>
#include<cstring>
#include<set>
#include<vector>
#include<queue>
#include<cmath>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#define maxn 100050
#define INF 0x3f3f3f3f
#define mod 1e9+7
#define eps 1e-8
typedef long long ll;
using namespace std;

int n,k,t,mi,z;
int num[16];

int main()
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        t=0,mi=1<<(k-1);
        for(int j=0;j<k;j++)
        {
            scanf("%d",&z);
            t+=z*mi;
            mi/=2;
        }
        num[t]++;
    }
    for(int i=0;i<(1<<k);i++)
    {
        if(num[i])
        {
            for(int j=0;j<(1<<k);j++)
            {
                if(num[j]&&(i&j)==0)
                {
                    printf("YES\n");
                    return 0;
                }
            }
        }
    }
    printf("NO\n");
    return 0;
}
