#include <stdio.h>

int main()
{
	int i, len, t, count=0;
	scanf("%d %d", &len, &t);
	char str[len+1];
	scanf("%s", &str);
	while(count!=t)
	{
		for (i=0; i<(len-1); i++)
		{
			if (str[i]=='B' && str[i+1]=='G')
			{
				str[i]='G';
				str[i+1]='B';
				i++;
			}
		}
		
		count++;
	}
	
	printf("%s", str);
	return 0;
}
