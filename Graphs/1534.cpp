#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,dest;
	cin>>n>>dest;
	dest--;

	int a[n-1];
	for(int i=0;i<n-1;i++)
	{
		cin>>a[i];
	}

	int next=0;
	while(next<n)
	{
		if(next==dest)
		{
			cout<<"yes"<<endl;
			return 0;
		}

		if(next>dest)
			break;
		next=next+a[next];
	}

	cout<<"no"<<endl;
	return 0;

}
