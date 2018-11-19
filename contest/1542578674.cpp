#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mst(a,b) memset((a),(b),sizeof(a))
#define pi acos(-1)
const int INF = 0x3f3f3f3f;
const double eps = 1e-6;
const int MAXN = 1e5 + 10;
const int MAXM = 1e6 + 10;


int main()
{
#ifdef local
    freopen("data","r",stdin);
#endif
    int h,m,s,t1,t2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    if(t1>t2) swap(t1,t2);
    int num=0;
    if(h>=t1&&h<t2) num++;
    if(m>=5*t1&&m<5*t2) num++;
    if(s>=5*t1&&s<5*t2) num++;

    if(num==0||num==3) puts("YES");
    else puts("NO");
    return 0;
}
