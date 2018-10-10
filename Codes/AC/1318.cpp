#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

map<string,int> mp;
int n,m,num;
string s;
int main()
{
	scanf("%d%d",&n,&m);
	mp.clear();
	for (int i=1;i<=n;++i)
	{
		cin>>s;
		mp[s]=1;
	}
	for (int i=1;i<=m;++i)
	{
		cin>>s;
		if (mp.count(s)) num++;
	}
	n-=num;m-=num;
	if (num%2==1)
	{
		if (n>=m) puts("YES");
		else puts("NO");
	}
	else
	{
		if (n>m) puts("YES");
		else puts("NO");
	}
	return 0;
}