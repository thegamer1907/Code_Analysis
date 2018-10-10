#include <bits/stdc++.h>
using namespace std;
int n,m,flag2,flag,ss,both;
string s[1005],a[1005];
map <string,int> mp;
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)	
	{
		cin>>s[i];
		mp[s[i]]=1;
	}
	for(int i=1;i<=m;i++)	
	{
		cin>>a[i];
		if(mp[a[i]]==0)
		{
			ss++;
		}
	}
	both=m-ss;
	if(both%2==1)
	{
		if(m>=n+1)
		{
			printf("NO");
		}
		else
		{
			printf("YES");
		}
	}
	else
	{
		if(m>=n)
		{
			printf("NO");
		}
		else
		{
			printf("YES");
		}
	}
	return 0;
}