#include<stdlib.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<stdio.h>
#include<queue>
using namespace std;
float h,m,s,t1,t2;
bool check(float x)
{
 if((x-t1>0.000001)&&(x-12.0<0.000001)||(x>=0)&&(x-t2<0.000001))
 return true;
 return false;
}
bool check1(float x)
{
 if((x-t1<0.000001)&&(x-t2>0.000001))
  return true;
 return false;
}
int main()
{
 while(~scanf("%f %f %f %f %f",&h,&m,&s,&t1,&t2))
 {
   if(t1<t2)
    swap(t1,t2);
   h=h+(m*60+s)/3600.0;
   m=floor(m/5)+(m-(floor(m/5)*5)+s)/3600;
   s=floor(s/5)+(s-(floor(s/5)*5))/3600;
   if(h>12.0)
    h-=12.0;
   if(m>12.0)
    m-=12.0;
   if(s>12.0)
    s-=12.0;
 //printf("%f %f %f %f %f\n",h,m,s,t1,t2);
   if(check(h)&&check(m)&&check(s))
    printf("YES\n");
   else if(check1(h)&&check1(m)&&check1(s))
   {
    printf("YES\n");
   }
   else
    printf("NO\n");
 }
 return 0;
}
