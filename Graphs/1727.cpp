#include <bits/stdc++.h>
#define in(a) scanf ("%d", &a)
#define mem(a, b, l) for(int i = 0; i < l; i ++) a[i] = b;
#define out(a) printf ("%d", a)
using namespace std;

int a[40001], m, n;
int pos = 0;
int main()
{
	in (n);
	in (m);
	for (int i = 0; i < n-1; i ++)
		in (a[i]);

	for (int i = 0; i < n-1; i ++)
	{
		pos += a[pos];
		if (pos == m-1)
			return printf ("YES"), 0;
		else if (pos > m-1)
			return printf ("NO"), 0;
	}
	return 0;
}