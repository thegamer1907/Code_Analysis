#include<bits/stdc++.h>
using namespace std;
int n,a[100005],c[100005],t,m,l;
bool b[100005];
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=n-1;i>=0;i--)
	{
		if(!b[a[i]])
			t++;
		c[i]=t;
		b[a[i]]=1;
	}
	for(int i=0;i<m;i++)
	{
		cin>>l;
		cout<<c[l-1]<<endl;
	}
	return 0;
}