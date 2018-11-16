#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;int a[100],b[100];int count=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+m);
	int x=0,y=0;
	while(x>-1)
	{
		if(abs(a[x]-b[y])<=1)
		{
			x++;
			y++;
			count++;
		}
		else if(abs(a[x]-b[y])>1)
		{
			if(a[x]<b[y])
			x++;
			else
			y++;
		}
		if(x==n || y==m)
		break;
	}
	cout<<count;
}
