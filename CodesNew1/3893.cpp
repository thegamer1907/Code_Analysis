#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<queue>
#include<cstring>
#include<vector>
#include<stack>
#include<algorithm>
#define LL long long 
using namespace std;

long long n,x;
long long sum=0,amax=0;

int main()
{
	
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>x;
		sum+=x;
		amax=max(amax,x);
	}
	cout<<max(amax,(sum-1)/(n-1)+1);
	return 0;
}
