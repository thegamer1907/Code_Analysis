#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,ju=0;
	char pwd[2];
	gets(pwd);
	scanf("%d\n",&n);
	char str[n][2];
	for(i=0; i<n; i++)
		gets(str[i]);
	for(i=0; i<n; i++)	
	{
		if( pwd[0] == str[i][0] && pwd[1] == str[i][1])
			ju = 1;
	}	
	for(i=0; i<n; i++)
	{
		if( pwd[0] == str[i][1])
		{
			for(i=0; i<n; i++)
				if(pwd[1] == str[i][0])
					ju = 1;
		}
	}
	if(ju == 1)
		printf("YES");
	else	printf("NO");
	
	return 0;
}
		  			  			 			   		  	 	 			