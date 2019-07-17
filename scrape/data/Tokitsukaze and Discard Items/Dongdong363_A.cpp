#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
long long n,m,k,a[110000],i=0;
long long flag1=0,flag2=0;
long long sum=0;
int main()
{

	cin>>n>>m>>k;
	for(int j=0;j<m;j++)
	{
		cin>>a[j];
	}
	while(flag1<m)
	{
		flag2=(a[i]-flag1)/k*k+flag1;
		if((a[i]-flag1)%k)
		flag2+=k;
		for(i=flag1;i<m;++i)
		{
			if(a[i]<=flag2)
			++flag1;
			else
			break;
		}
	
		sum++;
	}

	cout<<sum;
	
	
}