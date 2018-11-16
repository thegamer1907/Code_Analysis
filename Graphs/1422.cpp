#include<iostream>
#include<cstring>
using namespace std;
int a[31000];
int main()
{
	int n,t,m,temp;
	memset(a,0,sizeof(a));
	cin>>n>>t;
	a[0]=1;
	for(int i=1;i<=n-1;i++)
	{
		cin>>m;
		a[i]=m+i;
	}
	temp=a[0];
	while(temp!=0)
	{
		if(temp==t)
		{
			cout<<"YES";
			return 0;
		}
		temp=a[temp];
	}
	cout<<"NO";
	return 0;
}