#include<cstdio>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int ans[210],n,m,l,r;
string s[210];

int work(int x)
{
	for(int i=1;i<=10;i++)
		for(int j=0;j<=(1<<i)-1;j++)
		{
			string t;
			for(int k=0;k<=i-1;k++)
				if(j&(1<<k)) t+='1';
				else t+='0';
			if(s[x].find(t)==-1) return i-1;
		}
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++) cin>>s[i];
	scanf("%d",&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&l,&r);
		s[n+i]=s[l]+s[r];
		if(s[n+i].length()>1000)
			s[n+i]=s[n+i].substr(0,500)+s[n+i].substr(s[n+i].length()-500,500);
		ans[n+i]=max(max(ans[l],ans[r]),work(n+i));
		printf("%d\n",ans[n+i]);
	}
	return 0;
}
