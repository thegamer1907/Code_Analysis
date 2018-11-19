#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define OO 1e6;
void File()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
}
void IO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    double h,m,s,t1,t2;
    scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2);
    if(t1>t2)swap(t1,t2);
    double dm=12-(60.0-double(m))/5.0;
    double ds=12-(60.0-double(s))/5.0;
    bool b1,b2,b3;
    b1=b2=b3=0;
    if(t1<=h&&t2>h)b1=1;
    if (t1<=dm&&t2>dm)b2=1;
    if (t1<=ds&&t2>ds)b3=1;
    if(b1&&b2&&b3)puts("YES");
    else if (!b1&&!b2&&!b3)puts("YES");
    else puts("NO");
    return 0;
}
