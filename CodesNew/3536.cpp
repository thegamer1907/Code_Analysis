#include <iostream>
using namespace std;

int main() {
	long n,m,a[12355666],b=0,c=0,d,i;
	cin>>n>>m;
	for(i=0;i<n;i++){cin>>a[i];if(b<a[i])b=a[i];c+=a[i];}
	c=n*b-c;
	//cout<<c<<"::";
	

	if(m>c)
	{if((m-c)%n==0)cout<<(m-c)/n+b;else cout<<(m-c)/n+b+1;}
    else
	{cout<<b;}
	cout<<" "<<b+m;
	return 0;
}
