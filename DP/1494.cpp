#include<bits/stdc++.h>
using namespace std;
int a[101],o[101]={0},z[101]={0};
int main()
{

	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==0)
{
			z[i]=z[i-1]+1;
			o[i]=o[i-1];
}
		else if(a[i]==1)
{
			o[i]=o[i-1]+1;
			z[i]=z[i-1];
}
	}
	int ans = -101;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
			ans = max(ans,z[j]-z[i-1]-o[j]+o[i-1]);
	}
	cout<<ans+o[n]<<endl;

	return 0;
}
