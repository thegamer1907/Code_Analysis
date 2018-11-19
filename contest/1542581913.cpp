#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int h,m,s,t1,t2;
    double hd,md,sd,td1,td2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    if(h==12) h=0;
    if(t1==12) t1=0;
    if(t2==12) t2=0;
    if(t2<t1) swap(t1,t2);
    td1=t1*30;
    td2=t2*30;
    hd=(60*m+s)/120.0+30*h;
    md=6*m+0.1*s;
    sd=6*s;
    bool tt=0,mm=0,ss=0;
    if(hd>td1&&hd<td2) tt=1;
    if(md>td1&&md<td2) mm=1;
    if(sd>td1&&sd<td2) ss=1;
    
    if(tt&&mm&&ss) {printf("YES\n");return 0;}
    if(!(tt||mm||ss)){printf("YES\n");return 0;}
    printf("NO\n");
    return 0;
}
