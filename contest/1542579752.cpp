#include <stdio.h>
#include <iostream>
using namespace std;
int a,b,c,t1,t2;
double h,m,s;
bool judge(double x,double y)
{
    if(x<h&&h<y) return false;
    if(x<m&&m<y) return false;
    if(x<s&&s<y) return false;
    return true;
}
bool hehe(double x,double y)
{
    if(h<x) h+=360;
    if(m<x) m+=360;
    if(s<x) s+=360;
    if(x<h&&h<y) return false;
    if(x<m&&m<y) return false;
    if(x<s&&s<y) return false;
    return true;
}
int main()
{

    scanf("%d%d%d%d%d",&a,&b,&c,&t1,&t2);
    a%=12;
    h=360./12*a+30./60*b+30./60/60*c,m=360./60*b+360./60/60*c;
    s=360./60*c,t1%=12,t2%=12,t1*=30,t2*=30;
    if(t1>t2) swap(t1,t2);
    if(judge(t1,t2)||hehe(t2,t1+360)) printf("YES\n");
    else printf("NO\n");
}
