#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   float h,m,s,a,b,min,max;
   scanf("%f %f %f %f %f",&h,&m,&s,&a,&b);
    a=a*5;
    b=b*5;
    if (a==60)
     a=0;
    if (b==60)
     b=0;
     if (a>b)
      {
	  max=a;
      min=b;
     }
    else
     {
	 max=b;
     min=a;
     }
    h=h*5;
    if (h==60)
    {
	 h=0;
    }
    if (s!=0)
	m=m+0.1;
	if (m!=0)
	h=h+0.1;
      
     if (((min<h && h<max) || (min<m && m<max) || (min<s && s<max)) && ((h>max || h<min) || (m>max || m<min)||(s>max || s<min)))
        printf("NO");
     else
       printf("YES");
    
}
	 

