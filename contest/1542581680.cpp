#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn=int(1e5+110);
const double PI=acos(-1.0);
int main(int argc, char const *argv[])
{
    int h,m,s,t1,t2;
    while(~scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2))
    {
        if(h==12){
            h=0;
        }

        double hh=(h*30+m*(1.0/60)*30+s*(1.0/(60*60))*30);
        double mm=m*6+s*(1.0/60)*6;
        double ss=s*6;
        if(hh==360){
            hh=0;
        }
        if(mm==360){
            mm=0;
        }
        if(ss==360){
            ss=0;
        }
       // printf("%lf %lf %lf\n",hh,mm,ss);
        if(t1 == hh || t1 == mm || t1 == ss || t2 == hh || t2 == mm || t2 == ss){
            puts("NO");
            continue;
        }
        double tt1=t1*30;
        double tt2=t2*30;
       // printf("%lf %lf\n",tt1,tt2);
        if(tt1 > tt2){
            swap(tt1,tt2);
        }
        int flag1 = 0, flag2 = 0;
        if((hh > tt1 && hh < tt2) || (mm > tt1 && mm < tt2) || (ss > tt1 && ss < tt2)){
            flag1=1;
        }
        if((hh >= 0 && hh < tt1) || (hh < 360 && hh > tt2) || (mm >= 0 && mm < tt1) || (mm < 360 && mm > tt2) || (ss >= 0 && ss < tt1) || (ss < 360 && ss > tt2)){
            flag2=1;
        }
        if(flag1&&flag2){
            puts("NO");
        }
        else{
            puts("YES");
        }

    }
    return 0;
}
