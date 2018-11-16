#include<stdio.h>

int main (void)
{
	int n, m, steps=0;
	scanf("%d %d", &n, &m);

	while(m>n)
	{
		if(m%2==1)
		{
			m+=1;
		}
		else
		{
			m/=2;
		}
		steps++;
	}

	printf("%d", steps+n-m);
	return 0;
}

