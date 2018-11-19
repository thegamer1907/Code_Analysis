#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define INF 1061109567

int t[3],h,m,s,t1,t2;

int main(){
    //freopen("in.in","r",stdin);
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    h%=12;t1%=12;t2%=12;
    t[0]=h*5*3600+m*60+s;
    t[1]=m*3600+60*s;
    t[2]=3600*s;
    t1*=5*3600;
    t2*=5*3600;
    sort(t,t+3);
    if(t[0]<t1&&t1<t[1]&&t[0]<t2&&t2<t[1]) {printf("YES");return 0;}
    if(t[1]<t1&&t1<t[2]&&t[1]<t2&&t2<t[2]) {printf("YES");return 0;}
    if(((t[2]<t1&&t1<t[0]+3600*60)||(t[2]<t1+60*3600&&t1+60*3600<t[0]+3600*60))&&((t[2]<t2&&t2<t[0]+3600*60)||(t[2]<t2+60*3600&&t2+60*3600<t[0]+3600*60))) {printf("YES");return 0;}
    printf("NO");
}