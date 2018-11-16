#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n,m,i,x,y;
	cin>>n>>m;
	int a[n+1],b[n+1];
	for(i=1;i<=n;i++)
	cin>>a[i];
	map<int,int> ma;
		for(i=n;i>=1;i--)
		{
			ma[a[i]]=1;
			b[i]=ma.size();
		}
		for(i=0;i<m;i++)
		{
			cin>>x;
			cout<<b[x]<<"\n";
		}
	return 0;
}