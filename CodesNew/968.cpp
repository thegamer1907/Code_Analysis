#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <float.h>





int main() 
{
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	char str[n+m][501];
	int arr[n+m],n1=0,m1=0;
	for(i=0;i<n+m;i++)
	{
		scanf("%s",str[i]);
		arr[i] = strlen(str[i]);
		for(j=0;j<i;j++)
		{
			if(arr[i]==arr[j] && strcmp(str[i],str[j])==0)
			{
				break;
			}	
		}	
		if(j == i)
		{
			if(i < n)
			{
				n1++;
			}	
			else
			{
				m1++;

			}	
		}	
		else
		{
			if(j<n && i>=n)
			{
				n1--;
			}	
		}	
	}	
	if((n-n1)%2 == 1)
	{
		n1++;	
	}	
	
	if(n1 > m1)
	{
		printf("YES\n");
	}	
	else
	{
		printf("NO\n");
	}	
		
	
	




    return 0;
}
