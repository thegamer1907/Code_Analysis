#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	int a[n+1];
	int max=0;
	for (int i = 1; i <=n; ++i)
	{
		cin>>a[i];
	}
	a[0]=0;
	for (int i = 1; i <=n; ++i)
		a[i]+=a[i-1];
	
	int s=0,e=1;
	while(e<=n)
	{
		if(a[e]-a[s]<=t )
		{
			if(e-s>max)
			{
				// cout<<e<<s<<" "<<a[e]-a[s]<<" ";
				max=e-s;
			}
			e++;
		}
		else
			s++;
	}
	cout<<max;
	return 0;
}