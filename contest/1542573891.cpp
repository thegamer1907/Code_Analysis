#include<bits/stdc++.h>
using namespace std;
int main()
{
    float h,m,s,t1,t2;
    scanf("%f %f %f %f %f",&h,&m,&s,&t1,&t2);
    float mn=min(t1,t2);
    float mx=max(t1,t2);
    t1=mn;
    t2=mx;
    t1=t1*5.0;
    t2=t2*5.0;
    h=h*5.0;
    h=h+m/15.0+s/900.0;
    m=m+s/60.0;
    if(h>60.0)
        h=h-60.0;
    int f=0,g=0;
    if((h>=t1 && h<=t2)&&(m>=t1 && m<=t2)&&(s>=t1 && s<=t2))
        f=1;
     if((!(h>=t1 && h<=t2))&&(!(m>=t1 && m<=t2))&&(!(s>=t1 && s<=t2)))
        g=1;
    if(f||g)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
