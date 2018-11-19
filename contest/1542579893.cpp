//#include<bits/stdc++.h>
////#define LL long long
//using  namespace std;
//typedef long long LL;
//int main()
//{
//    int a,b,c,t1,t2;
//    scanf("%d%d%d%d%d",&a,&b,&c,&t1,&t2);
//    if(t1==12) t1=0;
//    if(t2==12) t2=0;
//    t1*=5;
//    t2*=5;
//    if(a==12)
//        a=0;
//    a*=5;
//    if(t1>t2) swap(t1,t2);
//    if(((t1<=a&&t2>a)||(t1<b&&t2>b)||(t1<c&&t2>c))&&(a>=t2||b>t2||c>t2||a<t1||b<t1||c<t1))
//    {
//        printf("NO\n");
//        return 0;
//    }
//    printf("YES\n");
//    return 0;
//}
#include<bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2;
double hhh,M,S;
bool ininin(double x,double y)
{
    if(x<hhh&&hhh<y) return false;
    if(x<M&&M<y) return false;
    if(x<S&&S<y) return false;
    return true;
}
bool calcal(double x,double y)
{
    if(hhh<x) hhh+=360;
    if(M<x) M+=360;
    if(S<x) S+=360;
    if(x<hhh&&hhh<y) return false;
    if(x<M&&M<y) return false;
    if(x<S&&S<y) return false;
    return true;
}
int main()
{

    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    h%=12;
    hhh=360./12*h+30./60*m+30./60/60*s;//
    M=360./60*m+360./60/60*s;
    S=360./60*s;
    t1%=12;
    t2%=12;
    t1*=30;
    t2*=30;
   // printf("hhh=%lf M=%lf S=%lf t1=%d t2=%d\n",hhh,M,S,t1,t2);
    if(t1>t2) swap(t1,t2);
    if(ininin(t1,t2)||calcal(t2,t1+360)) printf("YES\n");
    else printf("NO\n");
}
