#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int h,m,s,t1,t2;
    while(~scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2))
    {
        if(h==12) h=0;
        double hh=static_cast<double>(h)*30+static_cast<double>(m)/60.0*30.0+static_cast<double>(s)/60.0*0.5;
        double mm=static_cast<double>(m)*6.0+static_cast<double>(s)/60.0*6.0;
        double ss=static_cast<double>(s)*6.0;
        double tt1,tt2;
        if(t1==12) tt1=0.0;
        else tt1=static_cast<double>(t1)*30.0;
        if(tt2==12) tt2=0.0;
        else tt2=static_cast<double>(t2)*30.0;
        double minn=min(tt1,tt2);
        double maxn=max(tt1,tt2);
        //printf("%.2f %.2f %.2f %.2f %.2f",hh,mm,ss,tt1,tt2);
        bool flag1=0,flag2=0;
        if((hh>=minn&&hh<=maxn)&&(mm>=minn&&mm<=maxn)&&(ss>=minn&&ss<=maxn))
            flag1=1;
        if((hh<=minn||hh>=maxn)&&(mm<=minn||mm>=maxn)&&(ss<=minn||ss>=maxn))
            flag2=1;
        if(flag1||flag2)
            cout<<"yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
