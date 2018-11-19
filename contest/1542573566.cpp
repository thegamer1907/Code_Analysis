#include<bits/stdc++.h>
using namespace std;

int main() {
    int h,m,s,t1,t2;
    scanf("%d %d %d %d %d",&h,&m,&s,&t1,&t2);
    if(h==12)h=0;
    double ph=1.0*h+1.0*m/60+1.0*s/3600;//(m==0&&s==0)?h:h+1;
    double pm=1.0*m/5+1.0*s/5/60;//(m%5==0)?m/5:m/5+1;
    double ps=1.0*s/5;//(s%5==0)?s/5:s/5+1;
    if(t1==12) t1=0;
    if(t2==12) t2=0;
    int st=min(t1,t2);
    int en=max(t1,t2);
    int cnt=0;
    double stt=1.0*st,enn=1.0*en;
 //   printf("%f %f %f\n",ph,pm,ps);
 //   printf("%f %f\n",stt,enn);
    if(ph>=stt&&ph<=enn) cnt++;
    if(pm>=stt&&pm<=enn) cnt++;
    if(ps>=stt&&ps<=enn) cnt++;
    if(cnt==0||cnt==3) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
