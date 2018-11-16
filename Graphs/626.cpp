#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{int t,n;
cin>>n>>t;
vector<char> a;
for(int i=0;i<n;i++)
{
	char b;
	cin>>b;
	a.push_back(b);
}
for(int i=0;i<t;i++)
{
	for(int j=0;j<n-1;j++)
	{
	
	if(a[j]=='B'&&a[j+1]=='G')
	{
	
	swap(a[j],a[j+1]);
	j=j+1;}}
	
}
	
	for(int i=0;i<n;i++)
	cout<<a[i];
}