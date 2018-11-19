#include<bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2;
double H,M,S;
bool judge1(double x,double y)
{
    if(x<H&&H<y) return 0;
    if(x<M&&M<y) return 0;
    if(x<S&&S<y) return 0;
    return 1;
}
bool judge2(double x,double y)
{
    if(H<x) H+=360;
    if(M<x) M+=360;
    if(S<x) S+=360;
    if(x<H&&H<y) return 0;
    if(x<M&&M<y) return 0;
    if(x<S&&S<y) return 0;
    return 1;
}
int main()
{
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    h%=12;
    t1%=12;
    t2%=12;
    t1*=30;
    t2*=30;
    H=360./12*h+30./60*m+30./60/60*s;
    M=360./60*m+360./60/60*s;
    S=360./60*s;
    if(t1>t2) t1^=t2^=t1^=t2;
    if(judge1(t1,t2)||judge2(t2,t1+360)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

