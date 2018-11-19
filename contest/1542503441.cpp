#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,m,s,t1,t2;
    scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2);
    t1*=5;
    if(t1==60)
        t1=0;
    t2*=5;
    if(t2==60)
        t2=0;
    h*=5;
    m+=s/60;
    h+=m/12;
    if(h>=60)
    {
        h-=60;
    }
    if(t1<t2)
        swap(t1,t2);
    if((h<=t2||h>=t1)&&(m<=t2||m>=t1)&&(s<=t2||s>=t1))
    {
        printf("YES");
    }
    else if(h>t1||h<t2||m>t1||m<t2||s>t1||s<t2)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
    return 0;
}
