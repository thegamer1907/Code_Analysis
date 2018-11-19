#include <bits/stdc++.h>
using namespace std;
double h,m,s,t1,t2;
const double EPS=1e-6;
bool warp(double x)
{
    return (x<t1)^(x<t2);
}
int main()
{
    scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2);
    m+=s/60;
    h+=m/60;
    h*=5;
    if(h>=60)h-=60;
    t1*=5;
    t2*=5;
    if(t1>=60-EPS)
        t1=0;
    if(t2>=60-EPS)
        t2=0;
    if(( warp(h) && warp(m) && warp(s) ) || (!warp(h) && !warp(m) && !warp(s)))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}