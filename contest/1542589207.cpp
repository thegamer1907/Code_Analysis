#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<queue>
#include<stack>
#include<vector>
#define ri register int
#define ll long long
using namespace std;
char str[10],ch[105][10];
int n;
inline const int getint()
{
	int num=0,bj=1;
	char c=getchar();
	while(!isdigit(c))bj=(c=='-'||bj==-1)?-1:1,c=getchar();
	while(isdigit(c))num=num*10+c-'0',c=getchar();
	return num*bj;
}
int main()
{
	scanf("%s",str+1);
	n=getint();
	for(ri i=1;i<=n;i++)
	{
		scanf("%s",ch[i]+1);
		if(ch[i][1]==str[1]&&ch[i][2]==str[2]){printf("YES\n");return 0;}
	}
	for(ri i=1;i<=n;i++)
		for(ri j=1;j<=n;j++)
		if((ch[i][1]==str[2]&&ch[j][2]==str[1])){printf("YES\n");return 0;}
	printf("NO\n");
	return 0;
}



