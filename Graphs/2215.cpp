#include<bits/stdc++.h>
using namespace std;
int n,p[3000],t,ans,c;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>p[i];
	for(int i=1;i<=n;i++)
	{
		t=p[i];
		c=1;
		while(t!=-1)
		{
			c++;
			t=p[t];
		}
		ans=max(ans,c);
	}
	cout<<ans;
	return 0;
}