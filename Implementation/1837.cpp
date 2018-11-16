#include <stdio.h>
int sum[3];

int main()
{
	int n;
	scanf("%d", &n);
	int x, y, z;
	
	for (int i=0; i<n; i++)
	{
		scanf("%d %d %d", &x, &y, &z);
		sum[0]+=x;
		sum[1]+=y;
		sum[2]+=z;
	}
	
	if (sum[0]==0 && sum[1]==0 && sum[2]==0) printf("YES");
	else printf("NO");
	
	return 0;
}
