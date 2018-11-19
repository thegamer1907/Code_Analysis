#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<set>
#include<map>
#include<vector>
using namespace std;
inline int read()
{
	int x=0,t=1;char ch=getchar();
	while((ch<'0'||ch>'9')&&ch!='-')ch=getchar();
	if(ch=='-')t=-1,ch=getchar();
	while(ch<='9'&&ch>='0')x=x*10+ch-48,ch=getchar();
	return x*t;
}
char c[3];
int n;
char s[400][4];
inline bool check()
{
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
			if(s[i][1]==c[0]&&s[j][0]==c[1])return true;
	for(int i=1;i<=n;++i)
		if(s[i][0]==c[0]&&s[i][1]==c[1])return true;
	return false;
}
int main()
{
	scanf("%s",c);
	n=read();
	for(int i=1;i<=n;++i)scanf("%s",s[i]);
	bool fl=check();
	if(fl)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}
