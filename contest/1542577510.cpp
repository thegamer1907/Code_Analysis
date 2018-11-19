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
int n,k;
int s[100005][5];
int st[16];
int main()
{
	//freopen("3.in","r",stdin);
	//freopen("3.out","w",stdout);
	n=gi(),k=gi();
	for(RG int i=1;i<=n;++i) {
		for(RG int j=1;j<=k;++j) {
			s[i][j]=gi();
		}
		RG int r=0;
		for(RG int j=1;j<=k;++j)
			r=r*2+s[i][j];
		st[r]++;
	}
	for(RG int i=0;i<15;++i) {
	    for(RG int j=0;j<15;++j) {
			if(st[i]&&st[j]&&((i&j)==0)) {printf("YES\n");return 0;}
		}
	}
	printf("NO\n");
	//fclose(stdin);fclose(stdout);
	return 0;
}