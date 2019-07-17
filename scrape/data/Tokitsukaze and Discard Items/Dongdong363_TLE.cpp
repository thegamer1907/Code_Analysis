#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
long long n,m,k,a[110000];
long long flag1=0,flag2=0;
long long sum=0;
int main()
{
	
	cin>>n>>m>>k;
	for(int i=0;i<m;i++)
	{
		scanf(" %lld",&a[i]);
	}
	for(int i=0;i<m;++i)	
	{
		if(a[i]-flag1<=k)
		++flag2;
		else 
		{
			if(flag2)
			++sum;
			flag1+=flag2;
			while(a[i]-flag1>k)
			flag1+=k;
			flag2=0;
			i--;
		}
	}
	if(m)
	++sum;
	cout<<sum;
	
}