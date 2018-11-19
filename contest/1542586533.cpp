#include<stdio.h>
#include<algorithm>
using namespace std;
int main(void)
{
	int h, i, m, s, t1, t2, sum;
	scanf("%d%d%d%d%d", &h, &m, &s, &t1, &t2);
	if(h==12)  h = 0;
	if(t1==12)  t1 = 0;
	if(t2==12)  t2 = 0;
	h *= 5, t1 *= 5, t2 *= 5;
	if(t1>t2)
		swap(t1, t2);
	sum = 0;
	for(i=t1;i<=t2-1;i++)
	{
		if(i==h)
			sum++;
		if(i==s)
			sum++;
		if(i==m)
			sum++;
	}
	if(sum==3 || sum==0)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}