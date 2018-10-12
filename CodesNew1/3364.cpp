#include<bits/stdc++.h>
using namespace std;
int a[200010];
int main()
{
	int n,m,sum=0,mx=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)cin>>a[i],sum+=a[i],mx=max(mx,a[i]);
	sum+=m;
	cout<<max((sum+n-1)/n,mx)<<" "<<mx+m<<endl;
	return 0;
} 


