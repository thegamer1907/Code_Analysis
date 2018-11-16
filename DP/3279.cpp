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
int main(void)
{
	LL a, b, i;
	scanf("%lld%lld", &a, &b);
	for(i=62;i>=0;i--)
	{
		if((a&(1ll<<i))!=(b&(1ll<<i)))
		{
			printf("%lld\n", (1ll<<(i+1))-1);
			break;
		}
	}
	if(a==b)
		printf("0\n");
	return 0;
}