#include<stdio.h>
#include<algorithm>
#include<iostream> 
#include <stdlib.h>
using namespace std;
#define LL long long

int ans[10005]; 
int getsum(int num)
{
	int sum = 0;
	while(num>0)
	{
		sum+=num%10;
		num/=10;
	}
	return sum;
}
int main()
{
	int res = 0;
	int num = 10;
	while(res<10000)
	{
		if(getsum(num)==10)
		{
			ans[res++]=num;
		}
		num++;
	}
	int n;
	scanf("%d",&n);
	printf("%d\n",ans[n-1]);
	return 0;
}