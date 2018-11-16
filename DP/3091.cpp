#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<map>
#include<string>
#include<math.h>
#include<queue>
#include<stack>
#include<iostream>
using namespace std;
#define LL long long
#define mod 1000000007
int flag[5000005] = {1,1};
LL sum[5000005];
void Primeset()
{
	LL i, j;
	for(i=2;i<=5000000;i++)
	{
		if(flag[i])
			continue;
		sum[i] = 1;
		for(j=i*2;j<=5000000;j+=i)
		{
			flag[j] = 1;
			sum[j] = sum[j/i]+1;
		}
	}
	for(i=2;i<=5000000;i++)
		sum[i] += sum[i-1];
}
int main(void)
{
	int T, l, r;
	Primeset();
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d%d", &l, &r);
		printf("%lld\n", sum[l]-sum[r]);
	}
	return 0;
}