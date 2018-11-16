#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,m,count=0;
	cin>>m;
	int boys[m];
	for (int i = 0; i < m; ++i)
	{
		cin>>boys[i];
	}
	sort(boys,boys+m);
	cin>>n;
	int girls[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>girls[i];
	}
	sort(girls,girls+n);
	if(m>n){
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if(abs(boys[j]-girls[i])<=1) {count++;boys[j]=1000;break;}
		}
	}
	}
	else
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(abs(boys[i]-girls[j])<=1) {count++;girls[j]=1000;break;}
		}
	}
	cout<<count;


}