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
int Hash[25]; 
int n,k;
inline const int getint()
{
	int num=0,bj=1;
	char c=getchar();
	while(!isdigit(c))bj=(c=='-'||bj==-1)?-1:1,c=getchar();
	while(isdigit(c))num=num*10+c-'0',c=getchar();
	return num*bj;
}
inline bool Check(int x,int y)
{
	for(ri i=1;i<=k;i++)
		if((x&(1<<(i-1)))&(y&(1<<(i-1))))return 0;
	return 1;
}
int main()
{
	n=getint(),k=getint();
	for(ri i=1;i<=n;i++)
	{ 
		int sta=0;
		for(ri j=1;j<=k;j++)
		{
			int x=getint();
			sta=(sta<<1)+x;
		}
		Hash[sta]++;
	} 
	for(ri i=0;i<((1<<k)-1);i++)
		for(ri j=0;j<((1<<k)-1);j++)
			if(Hash[i]&&Hash[j]&&Check(i,j)){printf("YES\n");return 0;}
	printf("NO\n");
	return 0;
}


