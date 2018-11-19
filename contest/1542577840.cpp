#include<iostream>
#include<algorithm>
#include<cstdio>
#include<set>
#include<queue>
#define pyes {cout<<"yes";return 0;}
#define pno {cout<<"no";return 0;}
using namespace std;
string s,t[110];
int main()
{
	int n,i,j;
	char r[110];
	scanf("%s%d",r,&n);
	s=r;
	for (i=1;i<=n;i++) scanf("%s",r),t[i]=r;
	for (i=1;i<=n;i++) if (t[i]==s)pyes;
	for (i=1;i<=n;i++)for (j=1;j<=n;j++)if (t[i][0]==s[1]&&t[j][1]==s[0])pyes;pno;}