#include <iostream>
#include <string>
#include <queue>
#include <vector>
#include <fstream>
#include <cmath>
#include <sstream>
#include <bits/stdc++.h>
#include <climits>
using namespace std;

int power(int a,int b)
{
	int ans = 1;
	while(b>0)
	{
		if(b%2 == 1)
		{
			ans *= a;
		}
		a*=a;
		b/=2;
	}
	return ans;
}

long long int max(long long int a, long long int b)
{
	return a>b?a:b;
}

long long int min(long long int a, long long int b)
{
	return a>b?b:a;
}


int main()
{
	vector <bool> prime(10000001,true);
	prime[0] = false;
	prime[1] = false;
	int limit = sqrt(double(10000001));
	for(int i = 2;i<=limit;i++)
	{
		if(prime[i])
		{
			for(int j = 2*i;j<=10000000; j += i)
			{
				prime[j] = false;
			}
		}
	}
	int n;
	scanf("%d",&n);
	vector <int> num(10000001,0);
	for(int i = 0; i<n; i++)
	{
		int temp;
		scanf("%d",&temp);
		num[temp]++;
	}
	vector <int> arr(10000001,0);
	for(int i = 2;i<=10000000;i++)
	{
		if(prime[i])
		{
			for(int j = 0; j<=10000000; j+=i)
			{
				arr[i] += num[j];
			}
		}
	}
	for(int i = 1; i<=10000000; i++)
	{
		arr[i] += arr[i-1];
	}
	int m;
	scanf("%d",&m);
	for(int i = 0; i<m; i++)
	{
		int l,r;
		scanf("%d %d",&l,&r);
		if(r>10000000)
		{
			r = 10000000;
		}
		if(l>10000000)
		{
			printf("0\n");
		}
		else
		{
			printf("%d\n",arr[r]-arr[l-1]);
		}
	}
}