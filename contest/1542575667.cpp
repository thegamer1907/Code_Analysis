#include <bits/stdc++.h>
using namespace std;
#define eps 1e-8
#define INF 0x3f3f3f3f
#define maxn 100005
#define LL long long
bool check(double l,double r,double k)
{
    if(l<=k&&k<=r)
        return 1;
    if(l>r)
    {
        if(k<=r)
            return 1;
    }
    return 0;
}
int main()
{
    double h, m, s, t1, t2;
    scanf("%lf%lf%lf%lf%lf", &h, &m, &s, &t1, &t2);
    int flag = 0;
    h = h + m/60.0+s / 3600.0;
    m = (m + s / 60.0) / 5.0;
    s = s / 5.0;

    if(h>=12.0)
        h-=12.0;

    double pre=t1;
    int cnt = 0;
    for(double i = t1;; i += 1.0)
    {
        cnt++;
        if(cnt == 13)
            break;
        if(i >= 13.0)
            i = 1.0;
        if(check(pre,i,h) || check(pre,i,m)  || check(pre,i,s) )
        {
             flag = 1;
             break;
        }
        if(i == t2)
            break;
        pre=i;

    }
    if(flag == 0)
    {
        printf("YES\n");
        return 0;
    }
    flag = 0;
    cnt = 0;
    pre=t1;
    for(double i = t1;; i -= 1.0)
    {
        cnt++;
        if(cnt == 13)
            break;
        if(i == 0.0)
            i = 12.0;
        if(check(i,pre,h) || check(i,pre,m)  || check(i,pre,s))
        {
            flag = 1;
            break;
        }
        if(i == t2)
            break;
        pre=i;
    }
    if(flag == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
