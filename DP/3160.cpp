#include<stdio.h>
int a[155];
int main(void)
{
	int K, i, min, w, len;
	scanf("%d", &K);
	for(i=0;i<=8;i++)
		scanf("%d", &a[i]);
	min = 10000000;
	for(i=0;i<=8;i++)
	{
		if(a[i]<=min)
		{
			min = a[i];
			w = i;
		}
	}
	if(min>K)
		printf("-1\n");
	else
	{
		len = K/min;
		while(len)
		{
			for(i=8;i>=w;i--)
			{
				if(a[w]*(len-1)+a[i]<=K)
				{
					printf("%d", i+1);
					break;
				}
			}
			len -= 1;
			K -= a[i];
		}
		printf("\n");
	}
	return 0;
}