#include<stdio.h>
int main()
{
    double h,m,s,t1,t2;
    scanf("%lf %lf %lf %lf %lf",&h,&m,&s,&t1,&t2);
    double o1,o2,o3;
    t1 = (t1*30);
    t2 = (t2*30);
    o1 = h*30 + m/2 + s/120;
    o2 = m*6 + s/60;
    o3 = s*6;
    if(o1>360)
    {
        o1 = o1-360;
    }
    int temp = 0 , pemp = 0 ;
    if(t1<t2)
    {
        if(t1<=o1 && o1<=t2)
        {
            temp++;
        }
        if(t1<=o2 && o2<=t2)
        {
            temp++;
        }
        if(t1<=o3 && o3<=t2)
        {
            temp++;
        }
        if(temp==0 || temp==3)
        {
            printf("YES");
            return 0;
        }
    }
    else if(t2<t1)
    {
        if(o1>=t2 && o1<=t1)
        {
            pemp++;
        }
        if(o2>=t2 && o2<=t1)
        {
            pemp++;
        }
        if(o3>=t2 && o3<=t1)
        {
            pemp++;
        }
        if(pemp==0 || pemp==3)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}