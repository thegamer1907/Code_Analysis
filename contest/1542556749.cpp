#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int t[100];
int main()
{
    int h,m,s,x,y;
    while(~scanf("%d%d%d%d%d",&h,&m,&s,&x,&y))
    {
        memset(t,0,sizeof(t));
        h*=5;
        h+=(m*(5.0/60));
        //printf("%d\n",h);
//        if(m==0)
//            m=60;
//        if(s==0)
//            s=60;
        t[h%60]=1;
        t[m%60]=t[s%60]=1;
        x*=5;
        y*=5;
        x%=60;y%=60;
        int a=max(x,y);
        int b=min(x,y);
       // printf("a=%d b=%d\n",a,b);
        int flag1=0,flag=0;
        for(int i=b; i<a; i++)
        {
            if(t[i%60]==1)
            {
                //printf("i=%d\n",i);
                flag=1;
                break;
            }
        }
        for(int i=a; i<(b+60); i++)
        {
            if(t[i%60]==1)
            {
               // printf("i=%d\n",i);
                flag1=1;
                break;
            }
        }
        if(flag==0||flag1==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}

	     		     		   	 		 	 		 			