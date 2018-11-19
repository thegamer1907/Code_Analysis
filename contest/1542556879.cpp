#include<iostream>
#include<vector>
using namespace std;
int n, k, a[5], fix[1112], t;
vector <int> v;
main ()
{
	cin>>n>>k;
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=k; j++)
		{cin>>a[j]; t=t*2+a[j];}
		fix[t]=1;t=0;
	}
	if (fix[0]==1) {cout<<"YES"<<endl; return 0;}
	for (int i=1; i<16; i++)
	{
		if (fix[i]==1) v.push_back(i);
	}
	for (int i=0; i<v.size(); i++)
	for (int j=i+1; j<v.size(); j++)
	{
	t=v[i]&v[j];
		if (t==0) {cout<<"YES"<<endl; return 0;}
	}	
	cout<<"NO"<<endl;
}