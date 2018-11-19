#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<vector>
#include<queue>
#include<map>
#include<set>
#define MN 100
using namespace std;
inline int read()
{
	int x=0,f=1;char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
	while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
	return x*f;
}
int n;
char S[MN+5],s[MN+5][MN+5];
int main()
{
	scanf("%s",S+1);n=read();
	for(int i=1;i<=n;++i) scanf("%s",s[i]+1);
	for(int i=1;i<=n;++i)
	{
		if(s[i][1]==S[1]&&s[i][2]==S[2]) return 0*puts("YES");
		for(int j=1;j<=n;++j) if(S[1]==s[i][2]&&S[2]==s[j][1]) return 0*puts("YES"); 
	}
	puts("NO");
	return 0;
}

