#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,maxi=0,maxi1=0,mini1;
	long sum=0;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(maxi<a[i])
		maxi=a[i];
	}
	for(int i=0;i<n;i++)
	{
		sum+=maxi-a[i];
	}
	maxi1=maxi+m;
	mini1=maxi;
	if(m>sum)
		mini1=mini1+ceil((m-sum)*(1.0)/n);
	cout<<mini1<<" "<<maxi1<<endl;
	return 0;
}
