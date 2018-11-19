#include <cstdio>
#include <algorithm>
using namespace std;
int h,m,s,t1,t2;
double b[5],a[5];
int main(){
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    if(h == 12) h = 0;
    if(t1 == 12) t1 = 0;
    if(t2 == 12) t2 = 0;
    b[1] = (double)s/60.0;
    b[2] = (double)(m+b[1])/60.0;
    b[3] = (double)(h+b[2])/12.0;
    sort(b+1,b+4);
    a[1] = (double)t1/12.0;
    a[2] = (double)t2/12.0;
    sort(a+1,a+3);
    bool ok = (a[1]>b[1]&&a[1]<b[2]&&a[2]>b[1]&&a[2]<b[2]) ||
              (a[1]>b[2]&&a[1]<b[3]&&a[2]>b[2]&&a[2]<b[3]) ||
              (a[1]>b[3]&&a[2]>b[3]) ||
              (a[1]<b[1]&&a[2]<b[1]) ||
              (a[1]>b[3]&&a[2]<b[1]) ||
              (a[1]<b[1]&&a[2]>b[3]);
    printf(ok?"YES":"NO");
}
