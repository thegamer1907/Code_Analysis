#include<stdio.h>
char str[10005];
int ans[15];
int main(void)
{
	int i, cnt, now;
	scanf("%s", str+1);
	cnt = 0;
	while(1)
	{
		now = 0;
		for(i=1;str[i]!=0;i++)
		{
			if(str[i]>='1')
			{
				now = now*10+1;
				str[i]--;
			}
			else
				now = now*10;
		}
		if(now==0)
			break;
		ans[++cnt] = now;
	}
	printf("%d\n", cnt);
	for(i=1;i<=cnt;i++)
		printf("%d ", ans[i]);
	puts("");
	return 0;
}