#include<stdio.h>
char str[100005];
int num[155];
int main(void)
{
	int ans, i;
	gets(str+1);
	for(i=1;str[i]!=0;i++)
		num[str[i]] = 1;
	ans = 0;
	for(i='a';i<='z';i++)
		ans += num[i];
	printf("%d\n", ans);
	return 0;
}