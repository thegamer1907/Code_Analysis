#include <iostream>
using namespace std;
int n,t,a[30002],i,j=1,ans;
int main()
{
	cin>>n>>t;
	for(i=0;i<n-1;i++)
		cin>>a[i];
	for(i=0;i<n-1;)
	{
		i+=a[i];
		if(i==t-1){
			cout<<"YES";
			cin>>n;
		return 0;}
	}
	cout<<"NO";
	cin>>n;
	return 0;
}