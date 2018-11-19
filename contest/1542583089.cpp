#include <stdio.h>
#include <algorithm>

using namespace std;

int main()
{
    int h,m,s,t1,t2;
    while(~scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2))
    {
        if(h==12)
          h=0;
        if(t1==12)t1=0;
        if(t2==12)t2=0;
        h*=5,t1*=5,t2*=5;
        if(t1>t2)
        {
            int temp=t1;
            t1=t2;
            t2=temp;
        }
        int sum=0;
        int flag=0;
        if(h>=t1&&h<=t2)
        {
            if(h==t1&&m==0&&s==0||h==t2&&m==0&&s==0)
                flag=1;
            if(h==t2&&(m!=0||s!=0));
            else sum++;
        }
        if(!flag)
        {
            if(m>=t1&&m<=t2)
            {
                if((m==t1&&s==0)||(m==t2&&s==0))
                    flag=1;
                if(m==t2&&s!=0);
                else sum++;

            }
        }
        if(!flag)
        {
            if(s==t1||s==t2)
                flag=1;
            else if(s>t1&&s<t2)
                sum++;
        }
        if(flag)printf("NO\n");
        else
        {
            if(sum==0||sum==3)
                printf("YES\n");
            else printf("NO\n");
        }
    }
    return 0;
}
