#include <bits/stdc++.h>
using namespace std;
#define MX		1000
double num[4];
int main(int argc, char const *argv[])
{
	int h,m,s,t1,t2;
	scanf("%d%d%d%d%d",&h,&m,&s,&t1,&t2);
	t1 *= 5;t2*=5;
	num[1] = (double)h*5 + m/60.0 + s/60.0/60.0;
	if(num[1]>=60)num[1]-=60;
	num[2] = m + s/60.0;
	num[3] = s;
	sort(num+1,num+4);
	int tot1,tot2;
	int i;
	for (i = 1; i <= 2 ; ++i)
	{
		if(t1<num[i+1]&&t1>num[i])
		{
			break;
		}
	}
	tot1 = i;
	for (i = 1; i <= 2 ; ++i)
	{
		if(t2<num[i+1]&&t2>num[i])
		{
			break;
		}
	}
	tot2 = i;
	if(tot1 ==  tot2)
		printf("YES\n");
	else
	printf("NO\n");


}