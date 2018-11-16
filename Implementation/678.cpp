#include<stdio.h>
int main()
{
	int a[10000],i,j,n,k,count=0,x;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
         scanf("%d",&a[i]);
	
	for(j=1;j<=n;j++)
        {
		if(a[j]>=a[k] && a[j]>0)
		{
		   count++;
		}
	}
      printf("%d\n",count);
  return 0;
}
	
	
	  

	
