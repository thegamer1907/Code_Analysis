#include <cstdio>
const int MAXN = 1e5+5;
int a[MAXN]{ };
int beg=0, mn=1e9, n;

int main()
{
	scanf("%d", &n);
	for(int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
		if(mn > a[i]) mn = a[i];
	}
	if(mn != 0)
		beg = mn % n;
	for(int i = 0; i < n; ++i)
	{
		if(a[beg] <= mn)
		{
			printf("%d\n", beg+1);
			break;
		}
		beg = (beg+1) % n;
		++mn;
	}
    return 0;
}
