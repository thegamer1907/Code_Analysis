#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<queue>
#include<map>
#include<stack>
using namespace std;
#define mann 1001
#define INF 0x3f3f3f3f
double a[10];
int main()
{
    double h,m,s,t1,t2;
    while(~scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2))
    {
        memset(a,0,sizeof(a));
        if(h==12)
            h=0;
        a[0]=(h+m/60.0+s/3600.0)*30.0;
        a[1]=(m+s/60.0)*6.0;
        a[2]=s*6.0;
        a[3]=t1*30.0;
        a[4]=t2*30.0;
        int ans=0;
        double k1=min(a[3],a[4]);
        double k2=max(a[3],a[4]);
        if(a[0]>=k1&&a[0]<=k2)
            ans++;
        if(a[1]>=k1&&a[1]<=k2)
            ans++;
        if(a[2]>=k1&&a[2]<=k2)
            ans++;
        if(ans==0||ans==3)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
