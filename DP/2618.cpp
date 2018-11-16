#include<stdio.h>
int main()
{
	int a, b; scanf("%d %d", &a, &b);
	int res = 0;
	while(1)
	{
		if(a <= 0 || b <= 0 || (a == 1 && b == 1))
		{
			printf("%d\n", res);
			return 0;
		}
	//	printf("%d\n", res);
	//	printf("%d %d\n", a, b);
		if(a >= b) b+=3;
		else a+=3;
		a -= 2; b -= 2;
		res++;
	}
}
