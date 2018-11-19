#include <stdio.h>

typedef int ii;

#define ITR(x, a, b)		for(register int x = a; x < b; ++x)

int main()
{
	ii N;
	ii ff = 0;
	ii fs = 0;
	ii f = 0;
	char first, second;


	scanf("%c", &first);
	scanf("%c", &second);
	
	scanf("%d", &N);


	ITR(i, 0, N)
	{
		char a, b, c;
		scanf("%c", &c);
		scanf("%c", &a);
		scanf("%c", &b);

		if ((a == first) && (b == second))
		{
			f = 1;
			break;
		}
		if (a == second)
		{
			fs = 1;
		}
		if (b == first)
		{
			ff = 1;
		}
	}

	if ((f) | (ff & fs))
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}

	return 0;
}
