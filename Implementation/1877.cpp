#include <stdio.h>
#include <math.h>
#include <cstring>
#define ABS(x) (x)>0?(x):-(x)
#define MAX(x,y) (x)>(y)?(x):(y)
int x,y,z;
int main()
{
 int n,i,v;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 	scanf("%d",&v);
 	x+=v;
 	scanf("%d",&v);
 	y+=v;
 	scanf("%d",&v);
 	z+=v;
 }
 if(x==0 && y==0 && z==0)
 printf("YES");
 else
 printf("NO");
}
