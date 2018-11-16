#include <bits/stdc++.h>
using namespace std;
inline int read()
{
	int w=1,d=0; char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();	}
	while(ch>='0'&&ch<='9')d=d*10+ch-'0',ch=getchar();
	return w*d;
}
int n,a[200022];
int main()
{
	n=read();
	for(int i=1;i<=n;i++) a[i]=read();
	int len=1,ans=0;
	for(int i=2;i<=n;i++)
	{
		if(a[i-1]*2>=a[i])
		{
			len++;
		} 
		else
		{
			 
			ans=max(len,ans);
			len=1;
		}
	}
	ans=max(len,ans);
	cout<<ans;
}