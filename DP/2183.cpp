#include <bits/stdc++.h>
using namespace std;
int a[100006],b[100006];
int main()
{
	int n,m;
	set <int> s;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	cin>>a[i];
    for(int i=n;i>=0;i--)
	{
		s.insert(a[i]);
		b[i]=s.size();
	}
	for(int j=1;j<=m;j++)
	{
		int x;
		cin>>x;
		cout<<b[x]<<endl;
	}
	return 0;
}
