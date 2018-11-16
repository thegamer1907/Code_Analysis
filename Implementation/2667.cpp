#include<bits/stdc++.h>

using namespace std;

map<int,int>m1;

int main()
{
	int n;
	int x;
	scanf("%d",&n);
	for(long i=1;i<=n;i++)
	{
		scanf("%d",&x);
		m1[x]=i;
	}
	
	printf("%d",m1[1]);
	for(long i=2;i<=n;i++)
	{
		printf(" %d",m1[i]);
	}
	
	
	return 0;
}