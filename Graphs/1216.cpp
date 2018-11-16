#include<iostream>
using namespace std;
main()
{
	int n,t;
	cin>>n>>t;
	int a[n-1];
	for(int i=0;i<n-1;i++)
		cin>>a[i];
	int pos=0;
	while(pos<n-1)
	{
		pos+=a[pos];
		if(pos+1==t)
		{
			cout<<"YES";
			return 0;
		}
		//cout<<pos<<" ";
	}
	cout<<"NO";
}
