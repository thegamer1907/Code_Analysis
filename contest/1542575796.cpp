#include<cmath>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

int n;
char s[10],t[10];
bool fir,sec;

inline int read(){
	int x=0,f=1; char ch=getchar();
	for (;ch<'0'||ch>'9';ch=getchar()) if (ch=='-') f=-1;
	for (;ch>='0'&&ch<='9';ch=getchar()) x=x*10+ch-'0';
	return x*f;
}

int main(){
	scanf("%s",s+1); n=read();
	for (int i=1;i<=n;i++){
		scanf("%s",t+1);
		if (s[1]==t[1]&&s[2]==t[2]) fir=1,sec=1;
		if (s[1]==t[2]) fir=1;
		if (s[2]==t[1]) sec=1;
	}
	puts((fir&sec)?"YES":"NO");
	return 0;
}
