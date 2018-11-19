#include<bits/stdc++.h>
using namespace std;
int a[100];
int main()
{
    int h,m,s,t1,t2;
    while(~scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2))
    {
        int f1=0,f2=0,f3=0;
       for(int i=1;i<=60;i++)
        a[i]=0;
       if(m>0||s>0)
       {
           if(h==12) a[1]=1;
           else a[h*5+1]=1;
       }
       else a[h*5]=1;
        if(m%5==0&&s>0) a[m+1]=1;
        else a[m]=1;
        if(m==0&&s==0) a[60]=1;
        if(s==0) a[60]=1;
        else a[s]=1;
//       for(int i=0;i<60;i++)
//        printf("a=%d ",a[i]);
//       printf("\n");
        if(t1>t2) swap(t1,t2);
        for(int i=t1*5;i<=t2*5;i++)
        {
            if(a[i]==1)
            {
                f1=1;
                break;
            }
        }
        for(int i=1;i<t1*5;i++)
        {
            if(a[i]==1)
            {
                f2=1;
                break;
            }
        }
        for(int i=t2*5;i<=60;i++)
        {
            if(a[i]==1)
            {
                f3=1;
                break;
            }
        }
        if(f1==1&&(f2==1||f3==1))
            printf("NO\n");
        else printf("YES\n");

    }
}
