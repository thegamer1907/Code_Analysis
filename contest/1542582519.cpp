#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
#include<algorithm>
#include<vector>
#include<map>
#include<cstring>
#include<cmath>
using namespace std;

double a[4];

int fun(double x)
{
    if(x<a[0]||x>a[2])
        return 0;
    for(int i=1;i<=2;i++)
        if(x>a[i-1]&&x<a[i])
            return i;
}

int main()
{
    int h,m,s,t1,t2;
    while(~scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2))
    {
        if(h>=12)
            h-=12;
        a[0]=s*6.0;
        a[1]=m*6+a[0]/60;
        a[2]=h/12.0*360+a[1]/60;
        //for(int i=0;i<3;i++)
            //printf("%lf\n",a[i]);
        sort(a,a+3);
        //for(int i=0;i<3;i++)
            //printf("%lf\n",a[i]);
        double x1=t1*360/12.0;
        double x2=t2*360/12.0;
        int y1=fun(x1);
        int y2=fun(x2);
        if(y1==y2)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
