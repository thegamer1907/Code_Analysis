#include<bits/stdc++.h>
using namespace std;
int n,a[100010];
int main()
{
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int now=1,ans=0;
	for (int i=1;i<n;i++)
	{
		if (a[i]<=a[i-1])
		{
			ans=max(ans,now);
			now=1;
		}
		else
		{
			now++;
		}
	}
	ans=max(ans,now);
	cout<<ans<<endl;
	return 0;
}
