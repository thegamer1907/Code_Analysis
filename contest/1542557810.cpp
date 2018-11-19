#include<stdio.h>
int a[65];
int main()
{
    int h,m,s,t1,t2,i,j,k,t;
    scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
    if(m==0&&s==0)
    {
        a[0]=1;
        a[(h*5)%60]=1;
    }
    else if(s==0)
    {
        a[0]=1;
        a[(h*5+1)%60]=1;
        a[m]=1;
    }
    else
    {
        a[s]=1;
        if(m%5==0)
            a[m+1]=1;
        else
            a[m]=1;
        a[(h*5+1)%60]=1;
    }
    if(t2==12)
        t2=0;
    if(t1==12)
        t1=0;
    if(t1>t2)
    {
        t=t1;
        t1=t2;
        t2=t;
    }
    t=0;
    for(i=t1*5+1;i<=t2*5;i++)
    {
        if(a[i]==1)
            break;
    }
    if(i==t2*5+1)
        t=1;
    for(i=t2*5;i<=59;i++)
    {
        if(a[i]==1)
            break;
    }
    if(i==60)
    {
        for(i=0;i<=t1*5;i++)
        {
            if(a[i]==1)
                break;
        }
        if(i==t1*5+1)
            t=1;
    }
    if(t)
        printf("YES");
    else
        printf("NO");
    return 0;
}

 			 					 		 	   		   				