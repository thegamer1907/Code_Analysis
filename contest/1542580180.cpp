#include <stdio.h>
#include <iostream>
#include <string.h>
#include <algorithm>
#include <stdlib.h>
#include <math.h>


using namespace std;
int h,m,s,t1,t2;
double zsh[4];
double H,M,S;
bool in1(double x,double y)
{
    if(x<H&&H<y) return false;
    if(x<M&&M<y) return false;
    if(x<S&&S<y) return false;
    return true;
}
bool in2(double x,double y)
{
    if(H<x) H+=360;
    if(M<x) M+=360;
    if(S<x) S+=360;
    if(x<H&&H<y) return false;
    if(x<M&&M<y) return false;
    if(x<S&&S<y) return false;
    return true;
}
int main()
{
    
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    h%=12;
    H=360./12*h+30./60*m+30./60/60*s;//
    M=360./60*m+360./60/60*s;
    S=360./60*s;
    t1%=12;
    t2%=12;
    t1*=30;
    t2*=30;
   // printf("H=%lf M=%lf S=%lf t1=%d t2=%d\n",H,M,S,t1,t2);
    if(t1>t2) swap(t1,t2);
    if(in1(t1,t2)||in2(t2,t1+360)) printf("YES\n");
    else printf("NO\n");
}

