#include<map>
#include<cmath>
#include<queue>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
#define inf 1000000007
#define ll long long
#define N 100010
inline int rd()
{
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}
char s[N][3],a[3]; 
int main()
{
	int n;bool f=0;
	cin>>a>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
		if(s[i][0]==a[0]&&s[i][1]==a[1]) f=1;
		if(s[i][0]==a[1]&&s[i][1]==a[0]) f=1;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(s[i][1]==a[0]&&s[j][0]==a[1]) f=1;
			if(s[i][0]==a[1]&&s[j][1]==a[0]) f=1;
		}
	}
	puts(f?"YES":"NO");
	return 0;
}