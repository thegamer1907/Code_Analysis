#include<stdio.h>
int main()
{
	int people,place,point[100],count;
	
	scanf("%d %d",&people,&place);
	for(int a = 0 ; a<people ; a++)
	{
		scanf("%d",&point[a]);
		
	} for(int b = 0 ; b<people ; b++)
	{	
		if(point[place-1]<=point[b])
		{	if(point[b]!=0)
			{
				count++;	
			}
		}
	}  printf("%d",count);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
