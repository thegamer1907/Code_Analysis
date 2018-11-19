#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

double a[3];
double t1,t2,h,m,s;

int judge()
{
    if(t1>a[0] && t1<a[1] && t2>a[0] && t2<a[1])
        return 1;
    if(t1>a[1] && t1<a[2] && t2>a[1] && t2<a[2])
        return 1;
    if( (t2<a[0] && t1<a[0]) || (t2>a[2] && t1>a[2]) || (t1<a[0] && t2>a[2]) || (t2<a[0] && t1>a[2] ) )
        return 1;
    return 0;
}

int main()
{

    while(~scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2))
    {
        a[2]=(s/60*12);
        a[1]=(m/60*12)+a[2]/60;
        if(h>=12)
            h-=12;
        a[0]=h+a[1]/60;
        sort(a,a+3);
        if(judge())
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
