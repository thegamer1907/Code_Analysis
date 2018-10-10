#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define mst(a,b) memset((a),(b),sizeof(a))
#define rush() int T;scanf("%d",&T);while(T--)

typedef long long ll;
const int maxn = 100005;
const ll mod = 1e9+7;
const int INF = 0x3f3f3f;
const double eps = 1e-9;

int n,s;
int w[maxn];
ll temp[maxn];

ll judge(int num)
{
    for(int i=0;i<n;i++)
    {
        temp[i]=(ll)num*(i+1)+w[i];
    }
    sort(temp,temp+n);
    ll ans=0;
    for(int i=0;i<num;i++)
    {
        ans+=temp[i];
    }
    return ans;
}

int main()
{
    while(~scanf("%d%d",&n,&s))
    {
        for(int i=0;i<n;i++)
        {
            scanf("%d",&w[i]);
        }
        int l=0,r=n;
        int ans=-1;
        while(l<=r)
        {
            int m=(l+r)/2;
            if(judge(m)<=(ll)s)
            {
                ans=m;
                l=m+1;
            }
            else r=m-1;
        }
        ll cost=judge(ans);
        printf("%d %I64d\n",ans,cost);
    }
    return 0;
}
