#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	int n,m,d,num;
	cin>>n>>m;
	num=m;
	d=0;
	while(num>n)
	{
		if(num%2==0)
		{
			num/=2;
		}
		else 
		{
			num=(num+1)/2;
			d++;
		}
		d++;
	}
	
	if(num<n)
	{
		d+=n-num;
	}
	cout<<d<<endl;
	
	return 0;	
}
