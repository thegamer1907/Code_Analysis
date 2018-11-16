#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int cnt=0;
	while(b/2+b%2!=c/2+c%2)
	{
		b=b/2+b%2;
		c=c/2+c%2;
		a/=2;
		cnt++;
	}
	if(a==2)
	{
		cout<<"Final!";
		return 0;
	}
	cout<<cnt+1;
	return 0;
}