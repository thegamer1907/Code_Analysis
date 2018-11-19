#include <cstdio>

int n, k;
bool a[20];

int main()
{
	scanf("%d %d", &n, &k);
	while(n--)
	{
		int v[4] = {};
		for(int i=0; i<k; i++)
			scanf("%d", v+i);
		a[(v[0]<<3)+(v[1]<<2)+(v[2]<<1)+(v[3]<<0)] = true;
	}

	if(a[0])
	{
		printf("YES\n");
		return 0;
	}
	for(int i=0; i<16; i++)
		for(int j=i+1; j<16; j++)
			if(a[i] && a[j] && (i&j)==0)
			{
				printf("YES\n");
				return 0;
			}
	printf("NO\n");
	return 0;
}
