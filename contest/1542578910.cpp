#include<bits/stdc++.h>
#define ll long long
using namespace std;
int readin()
{
	int x=0,f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}
int a[100005];
string wa[200];
int main()
{
	int i,j;
	int n,k;
	string s;
	cin>>s;
	n=readin();
	for(i=1;i<=n;i++)
	{
		cin>>wa[i];
	}
	string stp;
	for(i=1;i<=n;i++)
	{
		if(wa[i]==s)
		{
			puts("YES");
			return 0;
		}
		for(j=1;j<=n;j++)
		{
			stp=wa[i]+wa[j];
			if(stp[1]==s[0]&&stp[2]==s[1])
			{
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
}