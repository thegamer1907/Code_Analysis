#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x,y,z;
	int xx=0,yy=0,zz=0;
	while(n--)
	{
		cin>>x>>y>>z;
		xx=xx+x;
		yy=yy+y;
		zz=zz+z;
	}
	if(xx==0&&yy==0&&zz==0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}