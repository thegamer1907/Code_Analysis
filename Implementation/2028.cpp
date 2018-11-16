#include<bits/stdc++.h>
using namespace std;
int X,Y,Z,x,y,z,n;
main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y>>z;
		X+=x;
		Y+=y;
		Z+=z;
	}
	if(X==0&&Y==0&&Z==0)
		cout<<"YES";
	else
		cout<<"NO";
}
