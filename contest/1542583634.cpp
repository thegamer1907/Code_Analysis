#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
inline int read()
{
	char c=getchar(); int num=0,f=1;
	while (c<'0'||c>'9') { if (c=='-') f=-1; c=getchar(); }
	while (c<='9'&&c>='0') { num=num*10+c-'0'; c=getchar(); }
	return num*f;
}
int n;
bool f_f=false,f_b=false;
string ans,now;
int main()
{
	cin>>ans;
	n=read();
	for (int i=1;i<=n;i++)
	{
		cin>>now;
		if (now[0]==ans[1]) f_b=true;
		if (now[1]==ans[0]) f_f=true;
		if (now[0]==ans[0]&&now[1]==ans[1]) f_f=true,f_b=true;
		if (f_b&&f_f)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	return 0;
}