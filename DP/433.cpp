#include<bits/stdc++.h>
using namespace std;
int a[100];
int main()
{
	int count[102];
	int i,n,m,b,ans;
	ans=0;
	for(i=0;i<=101;i++)
	count[i]=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d",&b);
		count[b]++;
	}
	sort(a,a+n);
	for(i=0;i<n;i++)
	{
		if(count[a[i]-1]!=0)
		{
			count[a[i]-1]--;
			ans++;
		}
		else if(count[a[i]]!=0)
		{
			count[a[i]]--;
			ans++;
		}
		else if(count[a[i]+1]!=0)
		{
			count[a[i]+1]--;
			ans++;
		}
	}
	printf("%d\n",ans);
	
	return 0;
}