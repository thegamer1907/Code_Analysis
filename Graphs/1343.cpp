#include <bits/stdc++.h>
using namespace std;
int a[1000010];
int main()
{
	int n,m;
	cin>>n>>m;
	int x;
	n--;
	for(x=1;x<=n;x++)
	{
		cin>>a[x];
	}
	x=1;
	while(x<m)
	{
		x+=a[x];
	}
	if(x==m)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
}
