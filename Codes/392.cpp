#include<stdio.h>
int main()
{
	__int64 n,x[10001],y[10],j,p=0,o=1,c,a=0;
    for(__int64 i=1;i<=11000000;i++)
    {
         j=i;c=0;a=0;
    	while(j)
    	{
    		y[a++]=j%10;
    		j=j/10;
    	}
    	for(__int64 k=0;k<=a;k++)
    	{
    		c+=y[k];
    	}
    	if(c==10)
    	x[o++]=i;
    } 
	while(scanf("%I64d",&n)!=EOF)
	{
		printf("%I64d\n",x[n]);
	}
}    
	  		 	    		 		  		    					 	