#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x=0,y=0;
	for (int i=0; i<n; i++)
	{
		int a,b;
		cin>>a>>b;
		if (a>b)
		{
			x++;
		}
		else if (a<b)
		{
			y++;
		}
	}
	if (x>y)
	{
		cout<<"Mishka";
		return 0;
	}
	else if (x==y)
	{
		cout<<"Friendship is magic!^^";
		return 0;
	}
	else
	{
		cout<<"Chris";
		return 0;
	}
}