#include <stdio.h>
#include <math.h>
#include <cstring>
#define ABS(x) (x)>0?(x):-(x)
#define MAX(x,y) (x)>(y)?(x):(y)
int asal(int x)
{
	int i,ctrl=0;
	for(i=2;i*i<=x;i++)
	 if(x%i==0)
	 ctrl=1;
	if(ctrl==0)
	return 1;
	 return 0; 
}  

int i,j;
int main()
{
 int n,t;
 scanf("%d %d",&n,&t);
 int b[n-1];
 for(i=0;i<n-1;i++)
 scanf("%d",&b[i]);
 for(i=0;i<n-1;)
 {
 	if(i+1==t)
 	{
 		break;
	}
//	printf("%d %d\n",i,b[i]);
 	i+=b[i];
 }
 	if(i+1==t)
 	{
 		printf("YES");
 		return 0;
	}
 printf("NO");
}
