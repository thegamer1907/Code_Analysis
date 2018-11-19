#include<bits/stdc++.h>
using namespace std;
double PI=acos(-1.0);

int main()
{

    double h,m,s,t1,t2;
    double sss=0.0083333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333;
    double temp;
    while(~scanf("%lf %lf%lf%lf%lf",&h,&m,&s,&t1,&t2)){
        h=(h*30+m*0.5+s*sss);
        m=(m*6+s*0.1);
        s=(s*6);
        t1=(t1*30);
        t2=(t2*30);
        if(h>m)
        {
            temp=h;
            h=m;
            m=temp;
        }
        if(h>s)
        {
            temp=s;
            s=h;
            h=temp;
        }
        if(m>s)
        {
            temp=m;
            m=s;
            s=temp;
        }
        int flag=0;
        if(t1>h&&t1<m&&t2>h&&t2<m)
            flag=1;
        else if(t1>m&&t1<s&&t2>m&&t2<s)
            flag=1;
        else if((s<t1||t1<h)&&(s<t2||t2<h))
            flag=1;
        if(flag==1)
            printf("YES\n");
        else printf("NO\n");


    }
    return 0;
}
