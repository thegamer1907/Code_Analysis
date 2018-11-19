#include <cstdio>
#include <map>
#include <cstring>
#include <algorithm>
using namespace std;
#define mst(a,b) memset((a),(b),sizeof(a))
#define rush() int T;scanf("%d",&T);while(T--)

typedef long long ll;
const int maxn = 100005;
const ll mod = 1e9+7;
const int INF = 0x3f3f3f3f;
const double eps = 1e-9;


int h,m,s,t1,t2;
double x[maxn];


int main()
{
    while(~scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2))
    {
        if(h==12) h=0;
        if(t1==12) t1=0;
        if(t2==12) t2=0;
        if(t1>t2) swap(t1,t2);
        x[1]=1.0*h+m*1.0/60+s*1.0/60/60;
        x[2]=(1.0*m+s*1.0/60)/5;
        x[3]=(1.0*s)/5;
        sort(x+1,x+4);
        x[0]=x[3]-12;
        x[4]=x[1]+12;
        int flag=0;
        for(int i=1;i<=4;i++)
        {
            if(x[i-1]<=t1&&x[i]>=t2)
            {
                flag=1;
                break;
            }
        }
        t1+=12;
        for(int i=1;i<=4;i++)
        {
            if(x[i-1]<=t2&&x[i]>=t1)
            {
                flag=1;
                break;
            }
        }
        if(flag) puts("YES");
        else puts("NO");
    }
}
