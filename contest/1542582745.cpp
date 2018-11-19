#include <bits/stdc++.h>

int vis[123] ;

int main()
{
    double a , b , c , t1 ,t2 ;
    memset(vis,0,sizeof vis) ;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&t1,&t2) ;

    if (a==12) a=0;
    if (t1==12) t1==0;
    if (t2==12) t2==0;
    double ta= a * 30 +  b * 30/60 + c * 30/3600;
    double tb= b * 6 + c * 6 / 60;
    double tc= c * 6;

    t1 *=30;
    t2 *=30;
    if (t1>t2) std::swap(t1,t2);

    int num=0;
    if ( t1<=ta && t2>=ta) num++;
    if ( t1<=tb && t2>=tb) num++;
    if ( t1<=tc && t2>=tc) num++;

    if (num==0 || num==3) puts("YES");
    else
        puts("NO");
    return 0 ;
}