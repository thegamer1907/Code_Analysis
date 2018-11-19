#include <bits/stdc++.h>
#define LL __int64

using namespace std;

int h,m,s,t1,t2,flag;
double a[3],T1,T2;

int main()
{
//    freopen("b.in","r",stdin);
    for ( ; scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2)!=EOF; )
    {
        a[0]=(double)s;
        a[1]=(double)s/60+m;
        if (h==12) a[2]=((double)m*60+s)/3600; else a[2]=((double)m*60+s)/3600+h*5;
        sort(a,a+3);
        T1=(double)t1*5,T2=(double)t2*5;
        flag=false;
        if (T1>a[0] && T1<a[1] && T2>a[0] && T2<a[1]) flag=true;
        if (T1>a[1] && T1<a[2] && T2>a[1] && T2<a[2]) flag=true;
        if ((T1>a[2] && T1<a[0]+60 ||  T1+60>a[2] && T1+60<a[0]+60) && (T2>a[2] && T2<a[0]+60 ||  T2+60>a[2] && T2+60<a[0]+60)) flag=true;
        printf(flag?"YES\n":"NO\n");
    }
    return 0;
}
