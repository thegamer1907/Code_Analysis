#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int n;
long long w[100007];
int main(){
	long long sum=0;
	long long ans1=0;
	long long ans2=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&w[i]);
		sum+=w[i];
		ans2=max(ans2,w[i]);
	}
	ans1=sum/(n-1);
	if(sum%(n-1)!=0)
	{
		ans1++;
	}
	printf("%lld",max(ans1,ans2));
	return 0;
} 