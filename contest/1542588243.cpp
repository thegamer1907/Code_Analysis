#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
    double a[3];
    int t1, t2;
    scanf("%lf%lf%lf%d%d",&a[0],&a[1],&a[2],&t1,&t2);
    t1 *= 5, t2 *= 5;
    a[1] += a[2]/60;
    a[0] += a[1]/60;
    a[0] *= 5;
    if(a[0] > 60) a[0] -= 60;
    sort(a, a+3);
    int tp1 = 0;
    if(a[0]<t1&&t1<a[1]) tp1=1;
    else if(a[1]<t1&&t1<a[2]) tp1=2;

    int tp2 = 0;
    if(a[0]<t2&&t2<a[1]) tp2=1;
    else if(a[1]<t2&&t2<a[2]) tp2=2;

    if(tp1 == tp2) printf("YES\n");
    else printf("NO\n");

    return 0;
}
