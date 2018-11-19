#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<queue>
#include<algorithm>
#include<stack>
#include<cstring>
#include<vector>
#include<list>
#include<bitset>
#include<set>
#include<map>
#include<time.h>
using namespace std;
typedef long long ll;
const int mod=1e6;
const int maxn=100000+10;
int main()
{
	int n;
	char s[1000][4],st[4];
	scanf("%s",st);
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	int flag=0,flag1=0,flag2=0;
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(s[i][0]==st[0]&&s[i][1]==st[1])
		flag=1;
		if(s[i][0]==st[1]&&s[i][1]==st[0])
		flag=1;
		if(s[i][1]==st[0])flag1=1;
		if(s[i][0]==st[1])flag2=1;
		if(flag1&&flag2)flag=1;
	}
	if(flag)printf("YES\n");
	else printf("NO\n");
	return 0;
}