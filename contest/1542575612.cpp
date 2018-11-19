#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int n,m;
bool vis[100];

inline int read(){
	int x=0,f=1; char ch=getchar();
	for (;ch<'0'||ch>'9';ch=getchar()) if (ch=='-') f=-1;
	for (;ch>='0'&&ch<='9';ch=getchar()) x=x*10+ch-'0';
	return x*f;
}

inline void print(int x){
	if (x<0){putchar('-'); x=-x;}
	if (x>=10) print(x/10);
	putchar(x%10+'0');
}

int main(){
	n=read(),m=read();
	for (int i=1;i<=n;i++){
		int res=0;
		for (int j=1;j<=m;j++) res=res*2+read();
		vis[res]=1;
	}
	bool flag=0;
	for (int i=0;i<(1<<m);i++)
		for (int j=0;j<(1<<m);j++)
			if (((i&j)==0)&&vis[i]&&vis[j]) flag=1;
	puts(flag?"YES":"NO");
	return 0;
}

