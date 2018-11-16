//soldier& banana
#include<iostream>
using namespace std;
int main ()
{
	int i,k,n,w,sum=0,count=0;
	cin>>k>>n>>w;
	for(i=1;i<=w;i++)
	{
		sum+=i*k;
	}
	if(sum>n)
	cout<<sum-n;
	else 
	cout<<count;
	return 0;
}
