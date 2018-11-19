#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main() {
    int h,m,s,t1,t2;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    h*=5;
    h%=60;
    t1*=5;
    t1%=60;
    t2*=5;
    t2%=60;
    double hl,ml,sl;
    sl=s;
    ml=m+sl/60;
    hl=h+ml/12;
    double a[3]={hl,ml,sl};
    sort(a,a+3);
    if(a[0]<=t1&&t1<=a[1]&&a[0]<=t2&&t2<=a[1])
    { printf("YES");return 0;}
    if(a[1]<=t1&&t1<=a[2]&&a[1]<=t2&&t2<=a[2])
    { printf("YES");return 0;}
    if((a[2]<=t1||t1<=a[0])&&(a[2]<=t2||t2<=a[0]))
    { printf("YES");return 0;}
    { printf("NO");return 0;}
}