#include <stdio.h>
#include <string.h>
int main ()
{
	char a[4];
	char b[4];
	int i, n;
	int z, s, c;
	while(scanf("%s", a)!=EOF)
	{
		z = 0, s = 0, c = 0;
		scanf("%d", &n);
		for(i = 1 ; i <= n ; i++)
		{
			scanf("%s", b);
			if(a[0] == b[0] && a[1] == b[1])
			{
				z = 1;
			}
			if(a[1] == b[0])
			{
				s = 1;
			}
			if(a[0] == b[1])
			{
				c = 1;
			}
		}
		if(z == 1 || (s == 1 && c == 1))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}

 		  	 		  	 	  	     	 		   	