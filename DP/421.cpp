#include<bits/stdc++.h>
using namespace std;
int diff(int x,int y);
int main()
{
	int n,i,j,count;
	cin>>n;
	int boys[n];
	for(i=0;i<n;i++)
	{
		cin>>boys[i];
	}
	sort(boys,boys+n);
	int m;
	cin>>m;
	int girls[m];
	for(j=0;j<m;j++)
	{
		cin>>girls[j];
	}
	sort(girls,girls+m);
	i=j=count=0;
	while(i<n&&j<m)
	{
		if(diff(boys[i],girls[j])<=1)
		{
			count++;
			i++;
			j++;
			continue;
		}
		else if(boys[i]>girls[j])
		{
			j++;
			continue;
		}
		else
		{
			i++;
			continue;
		}
	}
	cout<<count;
	return 0;
	
}
int diff(int x,int y)
{
	if(x>y)
	{
		return x-y;
	}
	else
	{
		return y-x;
	}
}