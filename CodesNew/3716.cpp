#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,mx=0,i,k,s=0;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>k;
		s=s+k;
		mx=max(mx,k);
	}
	cout<<max(mx,(s+m-1)/n+1)<<" "<<mx+m<<endl;
}