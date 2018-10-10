#include<iostream>
#include<string>
#include<string.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
long long a[200500];
int main()
{
	int n,i;
	long long minnum=1000000001;
	scanf("%d",&n);
	for (i=0;i<n;i++) 
	{
		scanf("%I64d",&a[i]);
		minnum=min(minnum,a[i]);
	}
	int tmp=minnum/n;
	for (i=0;i<n;i++) a[i]-=(long long)tmp*n;
	int j;
	for (j=1;j<=20;j++)
	{
		for (i=0;i<n;i++)
		{
			a[i]-=i;
			if (a[i]<=0) 
			{
				printf("%d",i+1);
				return 0;
			}
		}
		for (i=n-1;i>=0;i--) a[i]-=(n-i);
	}
	return 0;
}
