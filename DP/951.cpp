#include<iostream>
using namespace std;
typedef long  long int ll;
int main()
{
	ll n,m=0,r=-1,x=0,c=0,a;
	cin>>n;
	while(n--)
	{
		cin>>a;
		c+=a;
		x+=1-2*a;
		r=max(r,x-m);
		m=min(m,x);
	}
	cout<<r+c<<endl;
	return 0;
}