#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
#include<sstream>
#include<set>
#include<map>

using namespace std;

typedef long long LL;

int main()
{
	LL n,m,count=0,count1=0,count2=0;
	cin>>n>>m;
	string a[n],b[m];
	for(LL i=0;i<n;++i)
	{
		cin>>a[i];
	}
	for(LL i=0;i<m;++i)
	{
		cin>>b[i];
	}
	for(LL i=0;i<m;++i)
	{
		for(LL j=0;j<n;++j)
		{
			if(a[j]==b[i])
			{
				++count;
			}
		}
	}
	if(count%2!=0)
	{
		++count1;
	}
	count1=count1+(n-count);
	count2=count2+(m-count);
	if(count1>count2)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	






