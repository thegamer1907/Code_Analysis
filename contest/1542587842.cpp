#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int h,m,s,t1,t2;
int main(){
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    double a[3];
    a[0]=h%12*30+(m*60+s)/120.0;
    a[1]=m*6+s/10.0;
    a[2]=s*6;
    sort(a,a+3);
    int x,y;
    if(t1%12*30>a[0] && t1%12*30<a[1])x=0;
    else if(t1%12*30>a[1] && t1%12*30<a[2])x=1;
    else x=2;
    if(t2%12*30>a[0] && t2%12*30<a[1])y=0;
    else if(t2%12*30>a[1] && t2%12*30<a[2])y=1;
    else y=2;
    if(x==y)printf("YES");
    else printf("NO");
}
