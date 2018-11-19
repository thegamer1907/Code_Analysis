#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    double h, m, s;
    int t1, t2, cnt=0, cnt1=0, cnt2=0, cnt3=0;
    scanf("%lf%lf%lf%d%d", &h, &m, &s, &t1, &t2);
    h=h+m/60.0+s/3600.0;
    m=(m+s/60.0)/5.0;
    s/=5.0;
    if(h>12) h-=12;
    if(m>12) m-=12;

    t1%=12;
    t2%=12;
    if(t1>t2) swap(t1, t2);

    for(int i=t1; i<t2; i++)
    {
        if(i+1>=h && h>=i) cnt1=1;
        if(i+1>=m && m>=i) cnt2=1;
        if(i+1>=s && s>=i) cnt3=1;
    }
    cnt=cnt1+cnt2+cnt3;
    //printf("%lf %lf %lf %d %d %d", h, m, s, t1, t2, cnt);
    if(cnt==0 || cnt==3) printf("YES\n");
    else printf("NO\n");
    return 0;
}
/*
12 30 45 3 11

12 0 1 12 1

3 47 0 4 9
*/
