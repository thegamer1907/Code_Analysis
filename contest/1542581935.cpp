#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int h,m,s,t1,t2;
int main()
{
    while(scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2)!=EOF)
    {
        int x=0,y=0;
        if(t1==12)
            t1=0;
        if(t2==12)
            t2=0;
        if(h==12)
            h=0;
        if(t1>t2)swap(t1,t2);//t2>t1;
        t1=t1*60*60*5;
        t2=t2*60*60*5;

        h=h*60*60*5+s+m*60;
        m=m*60*60+s*60;
        s=s*60*60;

        if(s>t1&&s<t2)
            x++;
        else
            y++;

        if(m>t1&&m<t2)
            x++;
        else
            y++;

        if(h>t1&&h<t2)
            x++;
        else
            y++;
            ///printf("%d %d\n",x,y);
        if(x==3||y==3)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
















