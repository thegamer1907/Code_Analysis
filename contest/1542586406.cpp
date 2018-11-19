#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<ctime>
#include<algorithm>
#include<queue>
using namespace std;
char G[3],ch[3];
int n;
inline int read()
{
    int x=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=10*x+ch-'0';ch=getchar();}
    return x*f;
}
int main()
{
	scanf("%s",G+1);
	n=read();
	int L1=0,L2=0;
	for(int i=1;i<=n;i++)
		{
			scanf("%s",ch+1);
			if(ch[1]==G[2])L1++;
			if(ch[2]==G[1])L2++;
			if(ch[1]==G[1]&&ch[2]==G[2]){printf("YES\n");return 0;}
			if(L1&&L2){printf("YES\n");return 0;}
		}
	printf("No\n");
    return 0;
}