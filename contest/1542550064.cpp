#include<bits/stdc++.h>

double h,m,s,t1,t2;
int main()
{
    while(~scanf("%lf%lf%lf%lf%lf",&h,&m,&s,&t1,&t2))
    {
        t1*=5;t2*=5;
        m+=s/60;
        h+=m/60;
        h*=5;
        int res=0;
        if(t2<t1) t2+=60;
        if((s>t1&&s<t2)||(s-60>t1&&s-60<t2)||(s+60>t1&&s+60<t2)) res++;
        if((m>t1&&m<t2)||(m-60>t1&&m-60<t2)||(m+60>t1&&m+60<t2)) res++;
        if((h>t1&&h<t2)||(h-60>t1&&h-60<t2)||(h+60>t1&&h+60<t2)) res++;
        if(res==3||res==0) printf("YES\n");
        else printf("NO\n");
    }
}
         	   		  	  		    		  	