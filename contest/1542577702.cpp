#include<stdio.h>
int check(double x,int t1,int t2)
{
    if(x>t1&&x<t2)
        return 0;
    else
        return 1;
}
int main()
{
    double h,m,s;
    int t1,t2,temp;
    while(scanf("%lf%lf%lf%d%d",&h,&m,&s,&t1,&t2)==5)
    {
        if(t1>t2)
        {
            temp=t1;
            t1=t2;
            t2=temp;
        }

        h*=5;
        m+=s/60;
        h+=m/60;
        if(h>=60)
            h-=60;
        t1*=5;
        t2*=5;
        if(check(h,t1,t2)==check(m,t1,t2)&&check(m,t1,t2)==check(s,t1,t2))
            printf("YES\n");
        else
            printf("NO\n");
        //printf("h=%lf,m=%lf,s=%lf\n",h,m,s);

    }
    return 0;
}
