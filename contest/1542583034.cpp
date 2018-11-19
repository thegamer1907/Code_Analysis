#include <stdio.h>

typedef int ii;

#define ITR(x, a, b)		for(register int x = a; x < b; ++x)

#define MAX_SIZE	100

int main()
{
	ii h, m, s, t1, t2;

	scanf("%d", &h);
	scanf("%d", &m);
	scanf("%d", &s);
	scanf("%d", &t1);
	scanf("%d", &t2);

	if (h == 12) h = 0;
	if (t1 == 12) t1 = 0;
	if (t2 == 12) t2 = 0;

	h = h * 60 * 60 + m * 60 + s;
	m = (m * 60 + s)* 12;
	s = s * 60 * 12;
	t1 = t1 * 60 * 60;
	t2 = t2 * 60 * 60;


	if (t1 > t2)
	{
		ii tmp = t1;
		t1 = t2;
		t2 = tmp;
	}

	if (((h > t1) && (h < t2)) &&
		((m > t1) && (m < t2)) &&
		((s > t1) && (s < t2))
		)
	{
		printf("YES\n");
	}
	else if (((h > t1) && (h < t2)) ||
		((m > t1) && (m < t2)) ||
		((s > t1) && (s < t2))
		)
	{
		printf("NO\n");
	}
	else
	{
		printf("YES\n");
	}
	return 0;
}
