#include<bits/stdc++.h>
using namespace std;
int n,a[200],ans[200];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		ans[a[i]]=i;
	}
	for(int i=1;i<=n;i++)
		cout<<ans[i]<<' ';
	return 0;
}