#include<iostream>  
#include<cstdio>  
#include<iomanip>  
#include<cmath>  
#include<cstdlib>  
#include<queue>  
#include<cstring>  
#include<algorithm>  
#include<vector>  
using namespace std;

int n,tot=0;

bool check(int a)
{
	int sum=0;
	while(a!=0)
	{
		sum+=a%10;
		a/=10;
	}
	return sum==10;
}

int main()
{
	scanf("%d",&n);
	for(int i=1;;++i)
	{
		if(check(i))++tot;
		if(tot==n)
		{
			printf("%d\n",i);
			return 0;
		}
	}
}