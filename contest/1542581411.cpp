#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <bitset>
#include <string>
#include <stack>
#include <cmath>
#include <queue>
#include <set>
#include <map>
using namespace std;
#define INF 0x3f3f3f3f
#define LC(x) (x<<1)
#define RC(x) ((x<<1)+1)
#define MID(x,y) ((x+y)>>1)
#define fin(name) freopen(name,"r",stdin)
#define fout(name) freopen(name,"w",stdout)
#define CLR(arr,val) memset(arr,val,sizeof(arr))
#define FAST_IO ios::sync_with_stdio(false);cin.tie(0);
typedef pair<int,int> pii;
typedef long long LL;
const double PI=acos(-1.0);
const int N = 1e5+7;
int arr[N];
int G[N][5];
int vis[20];

int main(void)
{
    int n,k,i,j;
    while (~scanf("%d%d",&n,&k))
    {
        for (i=1; i<=n; ++i)
        {
            int v=0;
            for (j=0; j<k; ++j)
            {
                scanf("%d",&G[i][j]);
                if(G[i][j])
                    v|=(1<<j);
            }
            vis[v]=1;
        }
        int flag=0;
        for (i=0; i<(1<<k); ++i)
        {
            for (j=0; j<(1<<k); ++j)
            {
                if(vis[i]&&vis[j]&&((i&j)==0))
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
                break;
        }
        puts(flag?"YES":"NO");
    }
    return 0;
}
