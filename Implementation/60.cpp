#include<iostream>
using namespace std;
int j=0;
/*int f(int l,int a,int b,int r)
{
	i++;
	int m=(l+r)/2;
	if(a<=m&&b>m)
	{
		return i;
	}
	else if(a<m&&b<=m)
	{

	}
}*/
int main()
{
	int n,a,b;
	cin>>n>>a>>b;
	if(a>b)
	{
		int t=a;
		a=b;
		b=t;
	}
	//cout<<f(0,a,b,n);
	int k=0,p=n;
	while(p>0)
	{
		k++;
		p/=2;
	}
	for(int i=n/2;i>0;i/=2)
	{
		j++;
		if(a<=i&&b>i)
		{
			i=0;
		}
		else if(a>=i&&b>i)
		{
			a-=i;
			b-=i;
		}
	}
	if(j==1)
	{
		cout<<"Final!";
	}
	else
	{
		cout<<k-j;
	}
	return 0;
}