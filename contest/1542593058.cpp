#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>
#include<algorithm>
#include<cstring>
#define IL inline
#define RG register
#define db double
#define pi acos(-1.0)
#define inf 0x3f3f3f3f
#define LL long long
using namespace std;
IL int gi()
{
	RG int res=0,s=1;RG char ch;
	for(ch=getchar(); (ch<'0'||ch>'9')&&ch!='-' ;ch=getchar());
	if(ch=='-') s=-1,ch=getchar();
	for(;ch>='0'&&ch<='9';ch=getchar()) res=10*res+ch-48;
	return res*s;
}
int n;
char s[3];
char ss[105][3];
int g1,g2;
int main()
{
	//freopen("1.in","r",stdin);
	//freopen("1.out","w",stdout);
	scanf("%s",s+1);
	n=gi();
	for(RG int i=1;i<=n;++i) {
		scanf("%s",ss[i]+1);
		if(ss[i][1]==s[1]&&ss[i][2]==s[2]) {printf("yes\n");return 0;}
		if(ss[i][2]==s[1]) g1=1;
		if(ss[i][1]==s[2]) g2=1;
	}
	if(g1&&g2) printf("yes\n");
	else printf("no\n");
	//fclose(stdin);fclose(stdout);
	return 0;
}