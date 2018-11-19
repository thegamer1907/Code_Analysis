#include <bits/stdc++.h>
using namespace std;
int n , k, s,x;
int aa[16];
int main()
{
	scanf("%d%d",&n,&k);
	for (int i = 0; i < n; i++)
	{
		s = 0;
		for (int j = 0; j < k; j++)
		{
			scanf("%d",&x);
			s = (s << 1) + x;
		}
		aa[s] = 1;

	}

	//printf("%d%d",aa[1],aa[2]);
	for (int i = 0; i < 16; i++)
	{
		for (int j = i; j < 16; j++)
		{
			if (aa[i] && aa[j] && (i & j) == 0)
			{
				puts("YES");
				return 0;
			}
		}

	}
	puts("NO");
	return 0;

}