#include<iostream>
#include<string>
using namespace std;
main()
{
	int x,y,i;
	string a;
	cin>>x>>y>>a;
	while(y--!=0)
	{
		for(i=0;i<x;i++)
		if(a[i]=='B'&&a[i+1]=='G')
		swap(a[i],a[i+1]),i++;
	}
	cout<<a;
	
}
