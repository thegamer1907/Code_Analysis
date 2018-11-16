#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int n,t,i,j;
	char queue[55];
	while(scanf("%d%d",&n,&t)!=-1)
	{
	 	scanf("%s",queue);
	 	for(i=0;i<t;i++)
	 	{
	 		for(j=0;j<n-1;j++)
	 		if(queue[j]=='B'&&queue[j+1]=='G')
	 		{
		 		queue[j]='G';
		 		queue[j+1]='B';
		 		j++;
		 	}
	 	}
	 	printf("%s\n",queue);
 	}
 	return 0;
}
 