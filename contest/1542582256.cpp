#include <cstdio>

int h, m, s, t1, t2;

bool where(int a, int b, int t)
{
	if(a > b)
		a^=b^=a^=b;
	if(t <= a)
		return false;
	if(t <= b)
		return true;
	return false;
}

bool check()
{
	if(where(h, m, t1) != where(h, m, t2))
		return false;
	if(where(h, s, t1) != where(h, s, t2))
		return false;
	if(where(m, s, t1) != where(m, s, t2))
		return false;
	return true;
}

int main()
{
	scanf("%d %d %d %d %d", &h, &m, &s, &t1, &t2);

	h %= 12;
	m /= 5;
	s /= 5;
	t1 %= 12;
	t2 %= 12;

	printf("%s\n", check()? "YES" : "NO");
	return 0;
}
