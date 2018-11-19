#include <iostream>
#include <cstring>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    double h,m,s,t1,t2;
    while(~scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2)){
        double zh,zm,zs;
        zh = h*5;
        if(h==12)zh = 0;
        zm = m;
        zs = s;
        if(zm!=0||zs!=0)zh+=0.1;
        if(zs!=0)zm+=0.1;
        double h1,h2;
        h1 = t1*5;
        if(t1==12)h1 = 0;
        h2 = t2*5;
        if(t2==12)h2 = 0;
        if(h1>h2)swap(h1,h2);
        int flag = 1;
        if((zh>=h1&&zh<=h2)||(zm>=h1&&zm<=h2)||(zs>=h1&&zs<=h2))flag = 0;
        if(flag){
            printf("YES\n");
            continue;
        }
        flag = 1;
        if((zh>=h2&&zh<=60)||(zm>=h2&&zm<=60)||(zs>=h2&&zs<=60))flag = 0;
        if((zh>=0&&zh<=h1)||(zm>=0&&zm<=h1)||(zs>=0&&zs<=h1))flag = 0;
        if(flag)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}