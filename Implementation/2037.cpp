#include<bits/stdc++.h>
using namespace std;
int n,a[3],t;
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>t;
			a[j]+=t;
		}
	}
	if(a[0]==0&&a[1]==0&&a[2]==0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}