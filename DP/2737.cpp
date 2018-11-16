#include<iostream>
#include<algorithm>
using namespace std;
int a[10]={100,20,10,5,1};
int main()
{
	int n;
	cin>>n;
	int ans=0;
	for(int i=0;i<5;i++)
	{
		ans+=n/a[i];
		n%=a[i];
	}
	cout<<ans<<"\n";
	return 0;
}
